//
//  jailbreak.h
//  Meridian
//
//  Created by Ben Sparkes on 16/02/2018.
//  Copyright © 2018 Ben Sparkes. All rights reserved.
//

#ifndef jailbreak_h
#define jailbreak_h

#include <CoreFoundation/CoreFoundation.h>

int makeShitHappen(void);
int runV0rtex(void);
int patchEntitlements(void);
void doAlert(CFStringRef text, CFStringRef title, CFStringRef buttonText);
int patchContainermanagerd(void);
int remountRootFs(void);
int extractMeridianData(void);
void setUpSymLinks(void);
int extractBootstrap(int *exitCode);
int defecateAmfi(void);
int launchDropbear(void);
void setUpSubstitute(void);
int startJailbreakd(void);
int loadLaunchDaemons(void);
void enableHiddenApps(void);

#endif /* jailbreak_h */
