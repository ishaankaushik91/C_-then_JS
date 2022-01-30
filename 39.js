let Order = (call_production) => {
    console.log("Order placed pls wait for 5 second......");;
    setTimeout(() => {
        production();
    }, 5000);
}

function production()
{
    console.log("Here's your order");
}

Order(production);