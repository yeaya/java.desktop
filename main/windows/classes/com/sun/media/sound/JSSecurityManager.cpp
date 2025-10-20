#include <com/sun/media/sound/JSSecurityManager.h>

#include <com/sun/media/sound/JSSecurityManager$1.h>
#include <com/sun/media/sound/JSSecurityManager$2.h>
#include <com/sun/media/sound/Printer.h>
#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/sound/sampled/AudioPermission.h>
#include <jcpp.h>

using $JSSecurityManager$1 = ::com::sun::media::sound::JSSecurityManager$1;
using $JSSecurityManager$2 = ::com::sun::media::sound::JSSecurityManager$2;
using $Printer = ::com::sun::media::sound::Printer;
using $BufferedReader = ::java::io::BufferedReader;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $AudioPermission = ::javax::sound::sampled::AudioPermission;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JSSecurityManager$$Lambda$lambda$loadProperties$0 : public $PrivilegedAction {
	$class(JSSecurityManager$$Lambda$lambda$loadProperties$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(JSSecurityManager::lambda$loadProperties$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSSecurityManager$$Lambda$lambda$loadProperties$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JSSecurityManager$$Lambda$lambda$loadProperties$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSSecurityManager$$Lambda$lambda$loadProperties$0::*)()>(&JSSecurityManager$$Lambda$lambda$loadProperties$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSSecurityManager$$Lambda$lambda$loadProperties$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$0::load$($String* name, bool initialize) {
	$loadClass(JSSecurityManager$$Lambda$lambda$loadProperties$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$0::class$ = nullptr;

class JSSecurityManager$$Lambda$lambda$loadProperties$1$1 : public $PrivilegedAction {
	$class(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Properties* properties) {
		$set(this, properties, properties);
	}
	virtual $Object* run() override {
		 return $of(JSSecurityManager::lambda$loadProperties$1(properties));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSSecurityManager$$Lambda$lambda$loadProperties$1$1>());
	}
	$Properties* properties = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JSSecurityManager$$Lambda$lambda$loadProperties$1$1::fieldInfos[2] = {
	{"properties", "Ljava/util/Properties;", nullptr, $PUBLIC, $field(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, properties)},
	{}
};
$MethodInfo JSSecurityManager$$Lambda$lambda$loadProperties$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(static_cast<void(JSSecurityManager$$Lambda$lambda$loadProperties$1$1::*)($Properties*)>(&JSSecurityManager$$Lambda$lambda$loadProperties$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSSecurityManager$$Lambda$lambda$loadProperties$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.JSSecurityManager$$Lambda$lambda$loadProperties$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$1$1::load$($String* name, bool initialize) {
	$loadClass(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSSecurityManager$$Lambda$lambda$loadProperties$1$1::class$ = nullptr;

$MethodInfo _JSSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JSSecurityManager::*)()>(&JSSecurityManager::init$))},
	{"checkRecordPermission", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&JSSecurityManager::checkRecordPermission)), "java.lang.SecurityException"},
	{"createThread", "(Ljava/lang/Runnable;Ljava/lang/String;ZIZ)Ljava/lang/Thread;", nullptr, $STATIC, $method(static_cast<$Thread*(*)($Runnable*,$String*,bool,int32_t,bool)>(&JSSecurityManager::createThread))},
	{"getProviders", "(Ljava/lang/Class;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $STATIC | $SYNCHRONIZED, $method(static_cast<$List*(*)($Class*)>(&JSSecurityManager::getProviders))},
	{"lambda$loadProperties$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&JSSecurityManager::lambda$loadProperties$0))},
	{"lambda$loadProperties$1", "(Ljava/util/Properties;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)($Properties*)>(&JSSecurityManager::lambda$loadProperties$1))},
	{"loadProperties", "(Ljava/util/Properties;)V", nullptr, $STATIC, $method(static_cast<void(*)($Properties*)>(&JSSecurityManager::loadProperties))},
	{"loadPropertiesImpl", "(Ljava/util/Properties;Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Properties*,$String*,$StringArray*)>(&JSSecurityManager::loadPropertiesImpl))},
	{}
};

$InnerClassInfo _JSSecurityManager_InnerClassesInfo_[] = {
	{"com.sun.media.sound.JSSecurityManager$2", nullptr, nullptr, 0},
	{"com.sun.media.sound.JSSecurityManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JSSecurityManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.JSSecurityManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JSSecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_JSSecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.JSSecurityManager$2,com.sun.media.sound.JSSecurityManager$1"
};

$Object* allocate$JSSecurityManager($Class* clazz) {
	return $of($alloc(JSSecurityManager));
}

void JSSecurityManager::init$() {
}

void JSSecurityManager::checkRecordPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($AudioPermission, "record"_s));
	}
}

void JSSecurityManager::loadProperties($Properties* properties) {
	$load(JSSecurityManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, customFile, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(JSSecurityManager$$Lambda$lambda$loadProperties$0)))));
	if (customFile != nullptr) {
		if (loadPropertiesImpl(properties, customFile, $$new($StringArray, 0))) {
			return;
		}
	}
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(JSSecurityManager$$Lambda$lambda$loadProperties$1$1, properties)));
}

bool JSSecurityManager::loadPropertiesImpl($Properties* properties, $String* first, $StringArray* more) {
	$useLocalCurrentObjectStackCache();
	$var($Path, fname, $Paths::get(first, more));
	try {
		$var($Reader, reader, $Files::newBufferedReader(fname));
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				try {
					$nc(properties)->load(reader);
					var$2 = true;
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (reader != nullptr) {
						try {
							reader->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (reader != nullptr) {
					reader->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$Thread* JSSecurityManager::createThread($Runnable* runnable, $String* threadName, bool isDaemon, int32_t priority, bool doStart) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, (threadName != nullptr) ? threadName : "JSSM Thread"_s);
	$var($Thread, thread, $new($Thread, nullptr, runnable, threadName, 0, false));
	thread->setDaemon(isDaemon);
	if (priority >= 0) {
		thread->setPriority(priority);
	}
	if (doStart) {
		thread->start();
	}
	return thread;
}

$List* JSSecurityManager::getProviders($Class* providerClass) {
	$load(JSSecurityManager);
	$synchronized(class$) {
		$load(JSSecurityManager);
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($List, p, $new($ArrayList, 7));
		$var($PrivilegedAction, psAction, $new($JSSecurityManager$1, providerClass));
		$var($Iterator, ps, $cast($Iterator, $AccessController::doPrivileged(psAction)));
		$var($PrivilegedAction, hasNextAction, $new($JSSecurityManager$2, ps));
		while ($nc(($cast($Boolean, $($AccessController::doPrivileged(hasNextAction)))))->booleanValue()) {
			try {
				$var($Object, provider, $nc(ps)->next());
				if ($nc(providerClass)->isInstance(provider)) {
					p->add(0, provider);
				}
			} catch ($Throwable&) {
				$var($Throwable, t, $catch());
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return p;
	}
}

$Void* JSSecurityManager::lambda$loadProperties$1($Properties* properties) {
	$useLocalCurrentObjectStackCache();
	$var($String, home, $System::getProperty("java.home"_s));
	if (home == nullptr) {
		$throwNew($Error, "Can\'t find java.home ??"_s);
	}
	loadPropertiesImpl(properties, home, $$new($StringArray, {
		"conf"_s,
		"sound.properties"_s
	}));
	return nullptr;
}

$String* JSSecurityManager::lambda$loadProperties$0() {
	return $System::getProperty("javax.sound.config.file"_s);
}

JSSecurityManager::JSSecurityManager() {
}

$Class* JSSecurityManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JSSecurityManager$$Lambda$lambda$loadProperties$0::classInfo$.name)) {
			return JSSecurityManager$$Lambda$lambda$loadProperties$0::load$(name, initialize);
		}
		if (name->equals(JSSecurityManager$$Lambda$lambda$loadProperties$1$1::classInfo$.name)) {
			return JSSecurityManager$$Lambda$lambda$loadProperties$1$1::load$(name, initialize);
		}
	}
	$loadClass(JSSecurityManager, name, initialize, &_JSSecurityManager_ClassInfo_, allocate$JSSecurityManager);
	return class$;
}

$Class* JSSecurityManager::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com