//
// Copyright (c) 2013 Ford Motor Company
//
package com.smartdevicelink.proxy.rpc;

import java.util.Hashtable;

import com.smartdevicelink.proxy.RPCNotification;
import com.smartdevicelink.proxy.constants.Names;
import com.smartdevicelink.proxy.rpc.enums.ButtonName;
import com.smartdevicelink.proxy.rpc.enums.ButtonPressMode;
import com.smartdevicelink.util.DebugTool;

public class OnButtonPress extends RPCNotification {

    public OnButtonPress() {
        super("OnButtonPress");
    }
    public OnButtonPress(Hashtable hash) {
        super(hash);
    }
    public ButtonName getButtonName() {
        Object obj = parameters.get(Names.buttonName);
        if (obj instanceof ButtonName) {
            return (ButtonName) obj;
        } else if (obj instanceof String) {
            ButtonName theCode = null;
            try {
                theCode = ButtonName.valueForString((String) obj);
            } catch (Exception e) {
            	DebugTool.logError("Failed to parse " + getClass().getSimpleName() + "." + Names.buttonName, e);
            }
            return theCode;
        }
        return null;
    }
    public void setButtonName( ButtonName buttonName ) {
        if (buttonName != null) {
            parameters.put(Names.buttonName, buttonName );
        }
    }
    public ButtonPressMode getButtonPressMode() {
        Object obj = parameters.get(Names.buttonPressMode);
        if (obj instanceof ButtonPressMode) {
            return (ButtonPressMode) obj;
        } else if (obj instanceof String) {
            ButtonPressMode theCode = null;
            try {
                theCode = ButtonPressMode.valueForString((String) obj);
            } catch (Exception e) {
            	DebugTool.logError("Failed to parse " + getClass().getSimpleName() + "." + Names.buttonPressMode, e);
            }
            return theCode;
        }
        return null;
    }
    public void setButtonPressMode( ButtonPressMode buttonPressMode ) {
        if (buttonPressMode != null) {
            parameters.put(Names.buttonPressMode, buttonPressMode );
        }
    }
}
