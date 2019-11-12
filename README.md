
# Paystation payment module for Drupalcommerce

This integration is currently only tested up to Drupal 7.31 with DrupalCommerce 1.9

## Requirements
* An account with [Paystation](https://www2.paystation.co.nz/).
* An HMAC key for your Paystation account, contact our support team if you do not already have this <support@paystation.co.nz>

## Installation

These instructions will guide you through installing the module and conducting a test transaction.

After you have correctly installed Drupal and DrupalCommerce:

1. If you do not have an HMAC key provided by Paystation, request one by emailing support@paystation.co.nz.

2. Login into your Drupal site as the administrator.

3. Select the Modules tab. Make sure both the Update Manager and Payment UI modules are enabled. To do this, find these modules in the list, and make sure the check boxes beside them are checked. Scroll to the bottom of the list and click Save Configuration.

4. Click the Install New Module link.

5. In the box labelled "Upload a module or theme archive to install", select the name of this ZIP file, and click "Install".

6. On the Update Manager page, select a connection method (SSH or FTP). The username and password required are those for your SSH or FTP account on the server your Drupal site is on. These are NOT the same username and password you used in Step 1 to login into the administration pages of your Drupal site.

7. If the installation is successful, the message "Installation was completed successfully" will appear after installation.

8. Click "Enable newly added modules"

9. Find 'Paystation three-party payment module' under the 'COMMERCE (CONTRIB) heading.

10. Check the Enabled box, scroll to the bottom of the page, and click 'Save configuration'. It may take a few moments to enable the module, and when this is completed "The configuration options have been saved" will appear at the top of the page.

11. Select the Store tab.

12. Click on the Configuration link, and then click on the Payment methods link

13. The Paystation payment method should be located under Disabled payment method rules. Click enable in the Operations column.

14. A page will appear asking the question Are you sure you want to enable the reaction rule paystation?. Click the Confirm button.

15. The Paystation payment method will now appear under the list of Enabled payment rules.

16. Click edit in the Operations column for the Paystation method. This will take you to the page titled Editing reaction rule "paystation".

17. Under the Actions heading in the Operations column, click edit

18. Under Payment Settings, set 'Paystation ID' to the Paystation ID provided.

19. Set 'Gateway ID' to the Gateway ID provided.

20. Set the HMAC Key to the HMAC key provided.

21. We strongly suggest checking the "Enable Postback" box, as it will allow the cart to capture payment results even if your customers re-direct is interrupted. However, if your development/test environment is local or on a network that cannot receive connections from the internet, you must disable Postback.

Your Paystation account needs to reflect your Drupalcommerce settings accurately, otherwise order status will not update correctly.

The postback URL is: [host + drupal directory]/commerce-paystation/postback

For example - www.yourwebsite.co.nz/drupal/commerce-paystation/postback
- send this to support@paystation.co.nz with your Paystation ID and request your Postback URL to be updated.

22. Check the 'Enable test mode' check box.

23. If you wish to change any of the other settings on this page, please refer to the DrupalCommerce documentation.

24. Click the Save button at the bottom of the page.

25. Go to your online store.

26. To do a successful test transaction make a purchase where the final cost will have the cent value set to .00, for example $1.00, this will return a successful test transaction. To do an unsuccessful test transaction make a purchase where the final cost will have the cent value set to anything other than .00, for example $1.01-$1.99, this will return an unsuccessful test transaction.

Important: You can only use the test Visa and Mastercards supplied by Paystation for test transactions. They can be found here [Visit the Test Card Number page](https://www2.paystation.co.nz/developers/test-cards/). 

27. When you go to checkout - make sure you choose Paystation Payment Gateway in the Payment method section.

28. Once the site is working as expected you will need to fill in the form found on https://www2.paystation.co.nz/go-live so that Paystation can test and set your account into Production Mode.

29. Once Paystation have confirmed your Paystation account is in Production mode, , go back to the Paystation Payment Gateway settings page, and uncheck the 'Enable test mode' check box (refer to above steps) and click Save.

30. Congratulations - you can now process online credit card payments
