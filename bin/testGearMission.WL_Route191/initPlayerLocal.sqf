player execVM "customization\gear.sqf";
_ret = [false] call acre_api_fnc_setSpectator;
enableSentences false;
player disableConversation true;
player setSpeaker "NoVoice";