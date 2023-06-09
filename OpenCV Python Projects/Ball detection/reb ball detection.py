import cv2 as cv
import numpy as np

videoCapture = cv.VideoCapture(0)
prevCircle = None
def dist(x1, y1, x2, y2): return (x1-x2)**2+(y1-y2)**2

red_lower = np.array([0, 100, 100])
red_upper = np.array([10, 255, 255])

while True:
    ret, frame = videoCapture.read()
    if not ret:
        break

    hsvFrame = cv.cvtColor(frame, cv.COLOR_BGR2HSV)
    mask = cv.inRange(hsvFrame, red_lower, red_upper)
    blurFrame = cv.GaussianBlur(mask, (17, 17), 0)

    circles = cv.HoughCircles(blurFrame, cv.HOUGH_GRADIENT, 1.2,
                              100, param1=100, param2=30, minRadius=75, maxRadius=400)

    if circles is not None:
        circles = np.uint16(np.around(circles))
        chosen = None
        for i in circles[0, :]:
            if chosen is None:
                chosen = i
            if prevCircle is not None:
                if dist(chosen[0], chosen[1], prevCircle[0], prevCircle[1]) <= dist(i[0], i[1], prevCircle[0], prevCircle[1]):
                    chosen = i

        cv.circle(frame, (chosen[0], chosen[1]), 1, (0, 255, 0), 3)
        cv.circle(frame, (chosen[0], chosen[1]), chosen[2], (255, 0, 0), 3)
        prevCircle = chosen
    cv.imshow('circles', frame)

    if cv.waitKey(1) & 0xFF == ord('q'):
        break

videoCapture.release()
cv.destroyAllWindows()
