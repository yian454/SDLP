/*
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

/**
 * @ingroup SDLP TCP Device discovery
 * @author Elena Bratanova <ebratanova@luxoft.com>
 * @date 30.06.2013
 */
package com.smartdevicelink.tcpdiscovery;

/**
 * Delegate for TcpDiscovererCallbackDefaultImpl. All methods are called on the UI thread.
 */
public interface TcpDiscovererCallbackDefaultImplDelegate {
    /**
     * Called when user clicked an item in the pop-up
     * 
     * @param ip
     *            IP of the selected device
     * @param port
     *            Bound port on the selected device
     */
    public void onUserSelectedItem(String ip, String port);

    /**
     * Called when user clicks the dismiss button in the dialog
     */
    public void onUserDismissedDialog();

    /**
     * Called when performSearch returned nothing
     */
    public void onDiscovererFoundNothing();

    /**
     * @return name to be displayed on the "dismiss" button in the pop-up dialog
     *         with the found devices
     */
    public String getDismissDialogButtonName();

}
