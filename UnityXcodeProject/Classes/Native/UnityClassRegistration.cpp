struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

}

void RegisterAllClasses()
{
	//Total: 44 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//11. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//12. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//13. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//16. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//17. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//18. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//19. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//22. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//25. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//26. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//27. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//28. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//29. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//30. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//31. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//32. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//33. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//34. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//35. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//36. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//37. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//38. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//39. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//40. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//41. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//42. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//43. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
