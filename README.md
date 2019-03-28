# Commodity-Inventory-System
For the 1340 project.
# Problem Statement
With the rise of e-commerce services, the industry has expanded exponentially. There has been an increasing demand for a more efficient inventory system. 
A commodity inventory system should be **easy to manage**, and can quickly respond to changes in the inventory. 
## Search function
A search function should be implemented, search results should tell how many stocks are left, the price of the product, which shop contains the item. It also includes flags such as 'out-of-stock', 'nearly-out-of-stock', 'in-stock'. If the search result includes items that are 'out-of-stock' or 'nearly-out-of-stock', they will be pinned at the top of the search result, respectively. The standard number for 'nearly-out-of-stock' can be changed if needed.
## Input/Output
Different retail shops can input items to the systems seperately. 
The items inputted will provide basic information, such as name, amount, price, stock number, manufacturer, availability in shops. 
The system will read the input files, and store them into the system, and sort.
If an item is out-of-stock, we will notify all retailers asking if they want to restock, if all answers are 'NO', the system will delete the item.
If any extra descriptions or information needs to be updated, such as some problems retailers encountered, we can update it under said item immediately.
When the commodotity is 'out-of-stock' or 'nearly-out-of-stock', the system will alert you.
## Auto-update
The system will automatically update if there is new entries. (Such as an item status changing)
## Best selling policies
We have a command option called 'Best-selling', if executed, it will list out the top 3 items that were sold the most, and offer some policies to boost sales to retailers.
## Access current stock
You can view the current stock situation if you choose to, since the system is updated immediately.
You can also print the current inventory into an output file whenever you wish to.
