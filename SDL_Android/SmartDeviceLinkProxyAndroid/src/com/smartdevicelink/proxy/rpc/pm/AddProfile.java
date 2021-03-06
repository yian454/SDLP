/**
 *
 * SDLP SDK
 * Cross Platform Application Communication Stack for In-Vehicle Applications
 *
 * Copyright (C) 2013, Luxoft Professional Corp., member of IBS group
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; version 2.1.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 *
 */

package com.smartdevicelink.proxy.rpc.pm;

import java.util.Hashtable;

import com.smartdevicelink.proxy.RPCRequestFactory;
import com.smartdevicelink.proxy.constants.Names;

/**
 * Request to PM to add profile, should contain profile binary data. This
 * request should not be constructed directly; please use either
 * {@link RPCRequestFactory} or {@link ProfileBinaryPacketizer}
 */
public class AddProfile extends RPCProfileManagerRequest {

    AddProfile(String profileID, Integer correlationID, byte[] profileBinData) {
        super(Names.addProfile, profileID, correlationID);
        setProfileBinData(profileBinData);
    }

    public AddProfile(Hashtable hash) {
        super(hash);
    }

    public byte[] getProfileBinData() {
        return RPCProfileManagerHelper.getBytesForKeyFrom64String(parameters, HashTableKeys.PROFILE_BIN_DATA);
    }

    public void setProfileBinData(byte[] data) {
        RPCProfileManagerHelper.setBytesForKeyAs64String(parameters, HashTableKeys.PROFILE_BIN_DATA, data);
    }
}
