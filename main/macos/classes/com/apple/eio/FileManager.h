#ifndef _com_apple_eio_FileManager_h_
#define _com_apple_eio_FileManager_h_
//$ class com.apple.eio.FileManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace apple {
		namespace eio {

class FileManager : public ::java::lang::Object {
	$class(FileManager, 0, ::java::lang::Object)
public:
	FileManager();
	void init$();
	static int32_t OSTypeToInt($String* type);
	static $String* _findFolder(int16_t domain, int32_t folderType, bool createIfNeeded);
	static int32_t _getFileCreator($String* filename);
	static int32_t _getFileType($String* filename);
	static bool _moveToTrash($String* fileName);
	static void _openURL($String* url);
	static bool _revealInFinder($String* fileName);
	static void _setFileCreator($String* filename, int32_t creator);
	static void _setFileType($String* filename, int32_t type);
	static void _setFileTypeAndCreator($String* filename, int32_t type, int32_t creator);
	static $String* findFolder(int32_t folderType);
	static $String* findFolder(int16_t domain, int32_t folderType);
	static $String* findFolder(int16_t domain, int32_t folderType, bool createIfNeeded);
	static int32_t getFileCreator($String* filename);
	static int32_t getFileType($String* filename);
	static $String* getNativePathToApplicationBundle();
	static $String* getNativeResourceFromBundle($String* resourceName, $String* subDirName, $String* type);
	static $String* getPathToApplicationBundle();
	static $String* getResource($String* resourceName);
	static $String* getResource($String* resourceName, $String* subDirName);
	static $String* getResource($String* resourceName, $String* subDirName, $String* type);
	static $String* getResourceFromBundle($String* resourceName, $String* subDirName, $String* type);
	static bool moveToTrash(::java::io::File* file);
	static void openURL($String* url);
	static bool revealInFinder(::java::io::File* file);
	static void setFileCreator($String* filename, int32_t creator);
	static void setFileType($String* filename, int32_t type);
	static void setFileTypeAndCreator($String* filename, int32_t type, int32_t creator);
	static const int16_t kOnAppropriateDisk = (-32767);
	static const int16_t kSystemDomain = (-32766);
	static const int16_t kLocalDomain = (-32765);
	static const int16_t kNetworkDomain = (-32764);
	static const int16_t kUserDomain = (-32763);
};

		} // eio
	} // apple
} // com

#endif // _com_apple_eio_FileManager_h_