#include <stdlib.h> 
#include <cstdio>

int main() {

	printf("\n");
	printf("\n~~~~~~~~~~~ PROCESS KILLER ~~~~~~~~~~~\n");
	printf("\n***Make sure to run in administrator mode.***\n");
	printf("\n");
	printf("\n");

////////////////////////////////////////////////////////////
	//	List processes to kill in the following format:
	//	system("taskkill /IM \"process goes here\" /F"); 

	system("taskkill /IM \"OriginWebHelperService.exe\" /F");
	system("taskkill /IM \"Origin.exe\" /F");
	system("taskkill /IM \"QtWebEngineProcess.exe\" /F");
	system("taskkill /IM \"NordVPN.exe\" /F");
	system("taskkill /IM \"Hub.exe\" /F");
	system("taskkill /IM \"TransportClient.exe\" /F");
	system("taskkill /IM \"nordvpn-service.exe\" /F");
	system("taskkill /IM \"CoreSync.exe\" /F");
	system("taskkill /IM \"Creative Cloud Helper.exe\" /F");
	system("taskkill /IM \"Adobe Desktop Service.exe\" /F");
	system("taskkill /IM \"AdobeNotificationClient.exe\" /F");
	system("taskkill /IM \"CCLibrary.exe\" /F");
	system("taskkill /IM \"CCXProcess.exe\" /F");
	system("taskkill /IM \"VirtualDesktop.Service.exe\" /F");
	system("taskkill /IM \"MMERefresh.exe\" /F");
	system("taskkill /IM \"vmcompute.exe\" /F");
	system("taskkill /IM \"Immersed-service.exe\" /F");
	system("taskkill /IM \"Creative Cloud.exe\" /F");
	system("taskkill /IM \"AdobeUpdateService.exe\" /F");
	system("taskkill /IM \"OVRServiceLauncher.exe\" /F");
	system("taskkill /IM \"Adobe CEF Helper.exe\" /F");
	system("taskkill /IM \"AdAppMgrSvc.exe\" /F");
	system("taskkill /IM \"AdskLicensingService.exe\" /F");
	system("taskkill /IM \"OVRRedir.exe\" /F");
	system("taskkill /IM \"OVRServer_x64.exe\" /F");
	system("taskkill /IM \"AdobeExtensionsService.exe\" /F");
	system("taskkill /IM \"AdobeIPCBroker.exe\" /F");
	system("taskkill /IM \"FNPLicensingService.exe\" /F");
	system("taskkill /IM \"vmms.exe\" /F");
	system("taskkill /IM \"3dprintservice.exe\" /F");
	system("taskkill /IM \"agmservice.exe\" /F");
	system("taskkill /IM \"agsservice.exe\" /F");
	system("taskkill /IM \"dvs_service.exe\" /F");
	system("taskkill /IM \"cortana.exe\" /F");

	system("taskkill /IM \"Lenovo.Vantage.AddinHost.exe\" /F");
	system("taskkill /IM \"Lenovo.Vantage.AddinHost.amd64.exe\" /F");
	system("taskkill /IM \"LenovoVantageService.exe\" /F");
	system("taskkill /IM \"YourPhone.exe\" /F");
	system("taskkill /IM \"Spotify.exe\" /F");



////////////////////////////////////////////////////////////

	printf("\n***END OF LIST***\n");
	printf("\n Press enter to close this window. \n");

	printf("\n");
	printf("\n");

	scanf_s("%*c");

	return 0;
}
