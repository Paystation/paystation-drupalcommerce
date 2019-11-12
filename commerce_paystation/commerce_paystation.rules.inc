<?php

/**
 * Rules integration for paystation.
 */

/**
 * Implements hook_rules_action_info().
 */
function commerce_paystation_rules_action_info()
{
    $actions = array();

    // Must enable paystation payment before this will work!!
    $actions['commerce_paystation_redirect'] = array(
        'label' => t('Redirect to paystation'),
        'parameter' => array(
            'commerce_order' => array(
                'type' => 'commerce_order',
                'label' => t('Order in checkout'),
            ),
        ),
        'group' => t('Commerce Checkout'),
        'base' => 'commerce_paystation_redirect_checkout',
    );

    return $actions;
}
