package com.example.checkboxdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private CheckBox milkCheck, sugarCheck, waterCheck;
    private Button showBtn;
    private TextView resText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        milkCheck = (CheckBox) findViewById(R.id.milkId);
        sugarCheck = (CheckBox) findViewById(R.id.sugarId);
        waterCheck = (CheckBox) findViewById(R.id.waterId);

        showBtn = (Button) findViewById(R.id.showBtnId);
        resText = (TextView) findViewById(R.id.resTextViewId);

        showBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                StringBuilder stringBuilder = new StringBuilder();

                if (milkCheck.isChecked()) {
                    String value = milkCheck.getText().toString();
                    stringBuilder.append(value + " is ordered\n");
                }
                if (sugarCheck.isChecked()) {
                    String value = sugarCheck.getText().toString();
                    stringBuilder.append(value + " is ordered\n");
                }
                if (waterCheck.isChecked()) {
                    String value = waterCheck.getText().toString();
                    stringBuilder.append(value + " is ordered\n");
                }
                resText.setText(stringBuilder);
            }
        });
    }
}


//package com.example.checkboxdemo;
//
//import androidx.appcompat.app.AppCompatActivity;
//
//import android.os.Bundle;
//import android.view.View;
//import android.widget.Button;
//import android.widget.CheckBox;
//import android.widget.TextView;
//
//public class MainActivity extends AppCompatActivity {
//
//    private CheckBox milkCheck, sugarCheck, waterCheck;
//    private Button showBtn;
//    private TextView resText;
//
//    @Override
//    protected void onCreate(Bundle savedInstanceState) {
//        super.onCreate(savedInstanceState);
//        setContentView(R.layout.activity_main);
//
//        milkCheck = (CheckBox) findViewById(R.id.milkId);
//        sugarCheck = (CheckBox) findViewById(R.id.sugarId);
//        waterCheck = (CheckBox) findViewById(R.id.waterId);
//
//        showBtn = (Button) findViewById(R.id.showBtnId);
//        resText = (TextView) findViewById(R.id.resTextViewId);
//
//        showBtn.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View view) {
//                StringBuilder stringBuilder = new StringBuilder();
//
//                if (milkCheck.isChecked()) {
//                    String value = milkCheck.getText().toString();
//                    stringBuilder.append(value + " is ordered");
//                }
//                if (sugarCheck.isChecked()) {
//                    String value = sugarCheck.getText().toString();
//                    stringBuilder.append("\n" + value + " is ordered");
//                }
//                if (waterCheck.isChecked()) {
//                    String value = waterCheck.getText().toString();
//                    stringBuilder.append("\n" + value + " is ordered");
//                }
//                resText.setText(stringBuilder.toString());
//            }
//        });
//    }
//}
