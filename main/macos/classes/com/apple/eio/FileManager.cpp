#include <com/apple/eio/FileManager.h>

#include <com/apple/eio/FileManager$1.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $FileManager$1 = ::com::apple::eio::FileManager$1;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace apple {
		namespace eio {

$CompoundAttribute _FileManager_MethodAnnotations_openURL24[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _FileManager_FieldInfo_[] = {
	{"kOnAppropriateDisk", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kOnAppropriateDisk)},
	{"kSystemDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kSystemDomain)},
	{"kLocalDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kLocalDomain)},
	{"kNetworkDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kNetworkDomain)},
	{"kUserDomain", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FileManager, kUserDomain)},
	{}
};

$MethodInfo _FileManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileManager::*)()>(&FileManager::init$))},
	{"OSTypeToInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FileManager::OSTypeToInt))},
	{"_findFolder", "(SIZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int16_t,int32_t,bool)>(&FileManager::_findFolder))},
	{"_getFileCreator", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*)>(&FileManager::_getFileCreator)), "java.io.IOException"},
	{"_getFileType", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*)>(&FileManager::_getFileType)), "java.io.IOException"},
	{"_moveToTrash", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*)>(&FileManager::_moveToTrash))},
	{"_openURL", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*)>(&FileManager::_openURL)), "java.io.IOException"},
	{"_revealInFinder", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*)>(&FileManager::_revealInFinder))},
	{"_setFileCreator", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*,int32_t)>(&FileManager::_setFileCreator)), "java.io.IOException"},
	{"_setFileType", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*,int32_t)>(&FileManager::_setFileType)), "java.io.IOException"},
	{"_setFileTypeAndCreator", "(Ljava/lang/String;II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($String*,int32_t,int32_t)>(&FileManager::_setFileTypeAndCreator)), "java.io.IOException"},
	{"findFolder", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&FileManager::findFolder)), "java.io.FileNotFoundException"},
	{"findFolder", "(SI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int16_t,int32_t)>(&FileManager::findFolder)), "java.io.FileNotFoundException"},
	{"findFolder", "(SIZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int16_t,int32_t,bool)>(&FileManager::findFolder)), "java.io.FileNotFoundException"},
	{"getFileCreator", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FileManager::getFileCreator)), "java.io.IOException"},
	{"getFileType", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FileManager::getFileType)), "java.io.IOException"},
	{"getNativePathToApplicationBundle", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&FileManager::getNativePathToApplicationBundle))},
	{"getNativeResourceFromBundle", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&FileManager::getNativeResourceFromBundle)), "java.io.FileNotFoundException"},
	{"getPathToApplicationBundle", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&FileManager::getPathToApplicationBundle))},
	{"getResource", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&FileManager::getResource)), "java.io.FileNotFoundException"},
	{"getResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&FileManager::getResource)), "java.io.FileNotFoundException"},
	{"getResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&FileManager::getResource)), "java.io.FileNotFoundException"},
	{"getResourceFromBundle", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&FileManager::getResourceFromBundle)), "java.io.FileNotFoundException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($File*)>(&FileManager::moveToTrash)), "java.io.FileNotFoundException"},
	{"openURL", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($String*)>(&FileManager::openURL)), "java.io.IOException", nullptr, _FileManager_MethodAnnotations_openURL24},
	{"revealInFinder", "(Ljava/io/File;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($File*)>(&FileManager::revealInFinder)), "java.io.FileNotFoundException"},
	{"setFileCreator", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&FileManager::setFileCreator)), "java.io.IOException"},
	{"setFileType", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&FileManager::setFileType)), "java.io.IOException"},
	{"setFileTypeAndCreator", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t)>(&FileManager::setFileTypeAndCreator)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX__findFolder 2
#define _METHOD_INDEX__getFileCreator 3
#define _METHOD_INDEX__getFileType 4
#define _METHOD_INDEX__moveToTrash 5
#define _METHOD_INDEX__openURL 6
#define _METHOD_INDEX__revealInFinder 7
#define _METHOD_INDEX__setFileCreator 8
#define _METHOD_INDEX__setFileType 9
#define _METHOD_INDEX__setFileTypeAndCreator 10
#define _METHOD_INDEX_getNativePathToApplicationBundle 16
#define _METHOD_INDEX_getNativeResourceFromBundle 17

$InnerClassInfo _FileManager_InnerClassesInfo_[] = {
	{"com.apple.eio.FileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eio.FileManager",
	"java.lang.Object",
	nullptr,
	_FileManager_FieldInfo_,
	_FileManager_MethodInfo_,
	nullptr,
	nullptr,
	_FileManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.eio.FileManager$1"
};

$Object* allocate$FileManager($Class* clazz) {
	return $of($alloc(FileManager));
}

void FileManager::init$() {
}

int32_t FileManager::OSTypeToInt($String* type) {
	$init(FileManager);
	int32_t result = 0;
	$var($bytes, b, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	int32_t len = $nc(type)->length();
	if (len > 0) {
		if (len > 4) {
			len = 4;
		}
		type->getBytes(0, len, b, 4 - len);
	}
	for (int32_t i = 0; i < len; ++i) {
		if (i > 0) {
			result <<= 8;
		}
		result |= ((int32_t)(b->get(i) & (uint32_t)255));
	}
	return result;
}

void FileManager::setFileTypeAndCreator($String* filename, int32_t type, int32_t creator) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileTypeAndCreator(filename, type, creator);
}

void FileManager::_setFileTypeAndCreator($String* filename, int32_t type, int32_t creator) {
	$init(FileManager);
	$prepareNativeStatic(FileManager, _setFileTypeAndCreator, void, $String* filename, int32_t type, int32_t creator);
	$invokeNativeStatic(filename, type, creator);
	$finishNativeStatic();
}

void FileManager::setFileType($String* filename, int32_t type) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileType(filename, type);
}

void FileManager::_setFileType($String* filename, int32_t type) {
	$init(FileManager);
	$prepareNativeStatic(FileManager, _setFileType, void, $String* filename, int32_t type);
	$invokeNativeStatic(filename, type);
	$finishNativeStatic();
}

void FileManager::setFileCreator($String* filename, int32_t creator) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkWrite(filename);
	}
	_setFileCreator(filename, creator);
}

void FileManager::_setFileCreator($String* filename, int32_t creator) {
	$init(FileManager);
	$prepareNativeStatic(FileManager, _setFileCreator, void, $String* filename, int32_t creator);
	$invokeNativeStatic(filename, creator);
	$finishNativeStatic();
}

int32_t FileManager::getFileType($String* filename) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	return _getFileType(filename);
}

int32_t FileManager::_getFileType($String* filename) {
	$init(FileManager);
	int32_t $ret = 0;
	$prepareNativeStatic(FileManager, _getFileType, int32_t, $String* filename);
	$ret = $invokeNativeStatic(filename);
	$finishNativeStatic();
	return $ret;
}

int32_t FileManager::getFileCreator($String* filename) {
	$init(FileManager);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(filename);
	}
	return _getFileCreator(filename);
}

int32_t FileManager::_getFileCreator($String* filename) {
	$init(FileManager);
	int32_t $ret = 0;
	$prepareNativeStatic(FileManager, _getFileCreator, int32_t, $String* filename);
	$ret = $invokeNativeStatic(filename);
	$finishNativeStatic();
	return $ret;
}

$String* FileManager::findFolder(int32_t folderType) {
	$init(FileManager);
	return findFolder(FileManager::kOnAppropriateDisk, folderType);
}

$String* FileManager::findFolder(int16_t domain, int32_t folderType) {
	$init(FileManager);
	return findFolder(domain, folderType, false);
}

$String* FileManager::findFolder(int16_t domain, int32_t folderType, bool createIfNeeded) {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canExamineFileSystem"_s));
	}
	$var($String, foundFolder, _findFolder(domain, folderType, createIfNeeded));
	if (foundFolder == nullptr) {
		$throwNew($FileNotFoundException, $$str({"Can\'t find folder: "_s, $($Integer::toHexString(folderType))}));
	}
	return foundFolder;
}

$String* FileManager::_findFolder(int16_t domain, int32_t folderType, bool createIfNeeded) {
	$init(FileManager);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(FileManager, _findFolder, $String*, int16_t domain, int32_t folderType, bool createIfNeeded);
	$assign($ret, $invokeNativeStaticObject(domain, folderType, createIfNeeded));
	$finishNativeStatic();
	return $ret;
}

void FileManager::openURL($String* url) {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canOpenURLs"_s));
	}
	_openURL(url);
}

void FileManager::_openURL($String* url) {
	$init(FileManager);
	$prepareNativeStatic(FileManager, _openURL, void, $String* url);
	$invokeNativeStatic(url);
	$finishNativeStatic();
}

$String* FileManager::getResource($String* resourceName) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, nullptr, nullptr);
}

$String* FileManager::getResource($String* resourceName, $String* subDirName) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, subDirName, nullptr);
}

$String* FileManager::getResource($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	return getResourceFromBundle(resourceName, subDirName, type);
}

$String* FileManager::getNativeResourceFromBundle($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(FileManager, getNativeResourceFromBundle, $String*, $String* resourceName, $String* subDirName, $String* type);
	$assign($ret, $invokeNativeStaticObject(resourceName, subDirName, type));
	$finishNativeStatic();
	return $ret;
}

$String* FileManager::getResourceFromBundle($String* resourceName, $String* subDirName, $String* type) {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canReadBundle"_s));
	}
	$var($String, resourceFromBundle, getNativeResourceFromBundle(resourceName, subDirName, type));
	if (resourceFromBundle == nullptr) {
		$throwNew($FileNotFoundException, resourceName);
	}
	return resourceFromBundle;
}

$String* FileManager::getPathToApplicationBundle() {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission($$new($RuntimePermission, "canReadBundle"_s));
	}
	return getNativePathToApplicationBundle();
}

$String* FileManager::getNativePathToApplicationBundle() {
	$init(FileManager);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(FileManager, getNativePathToApplicationBundle, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

bool FileManager::moveToTrash($File* file) {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	if (file == nullptr) {
		$throwNew($FileNotFoundException);
	}
	$var($String, fileName, $nc(file)->getAbsolutePath());
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkDelete(fileName);
	}
	return _moveToTrash(fileName);
}

bool FileManager::_moveToTrash($String* fileName) {
	$init(FileManager);
	bool $ret = false;
	$prepareNativeStatic(FileManager, _moveToTrash, bool, $String* fileName);
	$ret = $invokeNativeStatic(fileName);
	$finishNativeStatic();
	return $ret;
}

bool FileManager::revealInFinder($File* file) {
	$init(FileManager);
	$useLocalCurrentObjectStackCache();
	if (file == nullptr || !$nc(file)->exists()) {
		$throwNew($FileNotFoundException);
	}
	$var($String, fileName, $nc(file)->getAbsolutePath());
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(fileName);
	}
	return _revealInFinder(fileName);
}

bool FileManager::_revealInFinder($String* fileName) {
	$init(FileManager);
	bool $ret = false;
	$prepareNativeStatic(FileManager, _revealInFinder, bool, $String* fileName);
	$ret = $invokeNativeStatic(fileName);
	$finishNativeStatic();
	return $ret;
}

void clinit$FileManager($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileManager$1)));
	}
}

FileManager::FileManager() {
}

$Class* FileManager::load$($String* name, bool initialize) {
	$loadClass(FileManager, name, initialize, &_FileManager_ClassInfo_, clinit$FileManager, allocate$FileManager);
	return class$;
}

$Class* FileManager::class$ = nullptr;

		} // eio
	} // apple
} // com