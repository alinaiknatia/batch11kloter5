function is_password_valid(password) {
    var Regex = /^(?=.*[=])(?=.*[A-Z])[a-z](?=.*[0-9])(?=.*[#@!%&*()=+]).{8,100}$/ ;
    return Regex.test(password) ;
}
if (is_password_valid("C0d3YourFuture!#")) {
    console.log('true');
} else {
     console.log('false');
}
//password()


function is_username_valid(username) {
    var Regex = /^[a-zA-Z0-9]{5,9}$/ ;
    return Regex.test(username) ;
}
if (is_username_valid("1Xruta888")) {
    console.log('true');
} else {
     console.log('false');
}
//username()
