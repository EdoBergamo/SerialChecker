#include "serials.h"
#include "console_functions.h"

void serials() {
    std::stringstream output;

    executeCommand("wmic diskdrive get serialnumber", output);
    displaySectionTitle("DISK Serial Numbers", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic bios get serialnumber", output);
    displaySectionTitle("BIOS Serial Number", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic cpu get serialnumber", output);
    displaySectionTitle("CPU Serial Number", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic baseboard get serialnumber", output);
    displaySectionTitle("Baseboard Serial Number", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic memorychip get serialnumber", output);
    displaySectionTitle("Memory Chip Serial Numbers", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic desktopmonitor get Caption, MonitorType, MonitorManufacturer, Name", output);
    displaySectionTitle("Desktop Monitor Information", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic networkadapter get MACAddress", output);
    displaySectionTitle("Network Adapter MAC Addresses", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic printers get Name, PortName, DriverName", output);
    displaySectionTitle("Printer Information", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic sounddev get Name, Manufacturer", output);
    displaySectionTitle("Sound Device Information", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic usbcontroller get Name, Manufacturer", output);
    displaySectionTitle("USB Controller Information", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_videocontroller get Description", output);
    displaySectionTitle("Graphics Card Description", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic cpu get Name", output);
    displaySectionTitle("CPU Name", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic logicaldisk get volumename, serialnumber", output);
    displaySectionTitle("Logical Disk Serial Numbers", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic networkadapterconfiguration get IPAddress, MACAddress", output);
    displaySectionTitle("Network Adapter IP Addresses", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic nic get Name, DeviceID", output);
    displaySectionTitle("Network Interface Controller (NIC) Information", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic printer get Name, DeviceID", output);
    displaySectionTitle("Printer Device IDs", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic idecontroller get Name, DeviceID", output);
    displaySectionTitle("IDE Controller Device IDs", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_physicalmedia get SerialNumber", output);
    displaySectionTitle("Physical Media Serial Numbers", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_processor get ProcessorId", output);
    displaySectionTitle("Processor ID", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic product get Name, Version, InstallDate", output);
    displaySectionTitle("Installed Products", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_operatingsystem get SerialNumber", output);
    displaySectionTitle("Operating System Serial Number", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_computersystem get Name", output);
    displaySectionTitle("Computer Name", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_computersystemproduct get IdentifyingNumber", output);
    displaySectionTitle("EFI Number", !output.str().empty());
    std::cout << output.str() << "\n";

    output.str("");
    executeCommand("wmic path win32_bios get SerialNumber", output);
    displaySectionTitle("SMBIOS Number", !output.str().empty());
    std::cout << output.str() << "\n";

    std::cout << "Control Finished.\n";
    std::cin.get();
}
