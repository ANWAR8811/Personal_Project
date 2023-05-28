// const company = {
//     name: 'Company Name',
//     address: 'Company Address',
//     phone: 'Company Phone',
// }

// // console.log(company.name)
// // console.log(company.address)
// // console.log(company.phone)

// const {name, address} = company

// console.log(name)
// console.log(address)


// const company = {
//     name: 'Company Name',
//     address: 'Company Address',
//     phone: 'Company Phone',

//     language: {
//         name: 'English',
//         code: 'en',
//         another: 'bangla'
//     }
// }


// const {name, language} = company

// console.log(name)
// console.log(language)
// console.log(language.name)
// console.log(language.code)


// const studentInfo = (student) => {
//     console.log(`${student.name}: ${student.id}`)
// }

// const student = {
//     id: 101,
//     name: 'Ahmed',
//     age: 20,
// }

// studentInfo(student)


const studentInfo = ({name, id}) => {
    console.log(`${name}: ${id}`)
}

const student = {
    id: 101,
    name: 'Ahmed',
    age: 20,
}

studentInfo(student)