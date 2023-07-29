// script.js

// Function to change the content of an HTML element
function changeElementContent() {
    // Get the HTML element using querySelector
    const element = document.querySelector('#elementId'); // Replace 'elementId' with the actual ID of the element you want to change

    // Check if the element is found
    if (element) {
        // Change the content of the element
        element.textContent = 'New Content'; // Replace 'New Content' with the new content you want to set
    } else {
        console.error('Element not found.');
    }
}

document.addEventListener('DOMContentLoaded', changeElementContent);
