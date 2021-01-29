# Midair-1.0.4.9504-SDK
Midair (Archetype Studios) 1.0.4.9504 SDK (UE4 4.17.2.0)


https://store.steampowered.com/app/439370/Midair/

## Offsets
**GObjects**: 0x3940DF0

**GNames**: 0x3938158

**UWorld**: 0x3A5D9A8

**ProcessEvent index**: 63


```cpp

SDK::FUObjectArray* SDK::UObject::GObjects = NULL;
SDK::TNameEntryArray* SDK::FName::GNames = NULL;
SDK::UWorld* UWorld = NULL;
...

SDK::UObject::GObjects = (SDK::FUObjectArray*)(base_address + 0x3940DF0);
SDK::FName::GNames = (SDK::TNameEntryArray*)(*(DWORD64*)(base_address + 0x3938158));
UWorld = (SDK::UWorld*)(*(DWORD64*)(base_address + 0x3A5D9A8));
```
