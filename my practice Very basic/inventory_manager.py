def inventory_report(items):
    generated_report={
        "total_items": sum(items.values()),
        "low_stock": min(items.values()),
        "highest_stock": max(items.values())
        
    }
    
    return generated_report
    
    
def main():
    items = {
        
    }
    
    while True:
        product = input("Entre your product: ")
        if  product == "exit":
            break
        quantity = int(input("Entre the quatity: "))
        
        items[product]=quantity
   
    report  = inventory_report(items) 
    print(report)
    
main()    