//
// Copyright (c) 2013 Ford Motor Company
//
package com.smartdevicelink.proxy.rpc;

import java.util.Hashtable;

import com.smartdevicelink.proxy.RPCResponse;

public class DeleteSubMenuResponse extends RPCResponse {

    public DeleteSubMenuResponse() {
        super("DeleteSubMenu");
    }
    public DeleteSubMenuResponse(Hashtable hash) {
        super(hash);
    }
}
