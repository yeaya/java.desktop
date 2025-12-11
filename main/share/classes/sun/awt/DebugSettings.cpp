#include <sun/awt/DebugSettings.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/StringBufferInputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <sun/awt/DebugSettings$1.h>
#include <sun/awt/NativeLibLoader.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DEFAULT_PROPS
#undef FINE
#undef FINER
#undef PREFIX
#undef PROP_CTRACE
#undef PROP_CTRACE_LEN
#undef PROP_FILE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $DebugSettings$1 = ::sun::awt::DebugSettings$1;
using $NativeLibLoader = ::sun::awt::NativeLibLoader;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$FieldInfo _DebugSettings_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DebugSettings, log)},
	{"PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DebugSettings, PREFIX)},
	{"PROP_FILE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DebugSettings, PROP_FILE)},
	{"DEFAULT_PROPS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DebugSettings, DEFAULT_PROPS)},
	{"instance", "Lsun/awt/DebugSettings;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DebugSettings, instance)},
	{"props", "Ljava/util/Properties;", nullptr, $PRIVATE | $FINAL, $field(DebugSettings, props)},
	{"PROP_CTRACE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DebugSettings, PROP_CTRACE)},
	{"PROP_CTRACE_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DebugSettings, PROP_CTRACE_LEN)},
	{}
};

$MethodInfo _DebugSettings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::init$))},
	{"getBoolean", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<bool(DebugSettings::*)($String*,bool)>(&DebugSettings::getBoolean))},
	{"getInstance", "()Lsun/awt/DebugSettings;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DebugSettings*(*)()>(&DebugSettings::getInstance))},
	{"getInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<int32_t(DebugSettings::*)($String*,int32_t)>(&DebugSettings::getInt))},
	{"getPropertyNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$List*(DebugSettings::*)()>(&DebugSettings::getPropertyNames))},
	{"getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$String*(DebugSettings::*)($String*,$String*)>(&DebugSettings::getString))},
	{"init", "()V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&DebugSettings::init))},
	{"loadDefaultProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::loadDefaultProperties))},
	{"loadFileProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::loadFileProperties))},
	{"loadNativeSettings", "()V", nullptr, $PRIVATE, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::loadNativeSettings))},
	{"loadProperties", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::loadProperties))},
	{"loadSystemProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(DebugSettings::*)()>(&DebugSettings::loadSystemProperties))},
	{"println", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(DebugSettings::*)(Object$*)>(&DebugSettings::println))},
	{"setCTracingOn", "(Z)V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(DebugSettings::*)(bool)>(&DebugSettings::setCTracingOn))},
	{"setCTracingOn", "(ZLjava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(DebugSettings::*)(bool,$String*)>(&DebugSettings::setCTracingOn))},
	{"setCTracingOn", "(ZLjava/lang/String;I)V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(DebugSettings::*)(bool,$String*,int32_t)>(&DebugSettings::setCTracingOn))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_setCTracingOn$13 13
#define _METHOD_INDEX_setCTracingOn$14 14
#define _METHOD_INDEX_setCTracingOn$15 15

$InnerClassInfo _DebugSettings_InnerClassesInfo_[] = {
	{"sun.awt.DebugSettings$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DebugSettings_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.DebugSettings",
	"java.lang.Object",
	nullptr,
	_DebugSettings_FieldInfo_,
	_DebugSettings_MethodInfo_,
	nullptr,
	nullptr,
	_DebugSettings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.DebugSettings$1"
};

$Object* allocate$DebugSettings($Class* clazz) {
	return $of($alloc(DebugSettings));
}

$PlatformLogger* DebugSettings::log = nullptr;
$String* DebugSettings::PREFIX = nullptr;
$String* DebugSettings::PROP_FILE = nullptr;
$StringArray* DebugSettings::DEFAULT_PROPS = nullptr;
DebugSettings* DebugSettings::instance = nullptr;
$String* DebugSettings::PROP_CTRACE = nullptr;
int32_t DebugSettings::PROP_CTRACE_LEN = 0;

void DebugSettings::init$() {
	$set(this, props, $new($Properties));
}

void DebugSettings::init() {
	$load(DebugSettings);
	$synchronized(class$) {
		$init(DebugSettings);
		if (!$nc($nc(DebugSettings::instance)->props)->isEmpty()) {
			return;
		}
		$NativeLibLoader::loadLibraries();
		$nc(DebugSettings::instance)->loadProperties();
		$nc(DebugSettings::instance)->loadNativeSettings();
	}
}

DebugSettings* DebugSettings::getInstance() {
	$init(DebugSettings);
	return DebugSettings::instance;
}

void DebugSettings::loadProperties() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DebugSettings$1, this)));
		$init($PlatformLogger$Level);
		if ($nc(DebugSettings::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(DebugSettings::log)->fine("DebugSettings:\n{0}"_s, $$new($ObjectArray, {$of(this)}));
		}
	}
}

$String* DebugSettings::toString() {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, bout, $new($ByteArrayOutputStream));
	$var($PrintStream, pout, $new($PrintStream, static_cast<$OutputStream*>(bout)));
	{
		$var($Iterator, i$, $nc($($nc(this->props)->stringPropertyNames()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($String, value, $nc(this->props)->getProperty(key, ""_s));
				pout->println($$str({key, " = "_s, value}));
			}
		}
	}
	return $new($String, $(bout->toByteArray()));
}

void DebugSettings::loadDefaultProperties() {
	$useLocalCurrentObjectStackCache();
	try {
		for (int32_t nprop = 0; nprop < $nc(DebugSettings::DEFAULT_PROPS)->length; ++nprop) {
			$var($StringBufferInputStream, in, $new($StringBufferInputStream, $nc(DebugSettings::DEFAULT_PROPS)->get(nprop)));
			$nc(this->props)->load(static_cast<$InputStream*>(in));
			in->close();
		}
	} catch ($IOException& ioe) {
	}
}

void DebugSettings::loadFileProperties() {
	$useLocalCurrentObjectStackCache();
	$var($String, propPath, nullptr);
	$var($Properties, fileProps, nullptr);
	$assign(propPath, $System::getProperty($$str({DebugSettings::PREFIX, "."_s, DebugSettings::PROP_FILE}), ""_s));
	if ($nc(propPath)->isEmpty()) {
		$init($File);
		$assign(propPath, $str({$($System::getProperty("user.home"_s, ""_s)), $File::separator, DebugSettings::PREFIX, "."_s, DebugSettings::PROP_FILE}));
	}
	$var($File, propFile, $new($File, propPath));
	try {
		println($$str({"Reading debug settings from \'"_s, $(propFile->getCanonicalPath()), "\'..."_s}));
		$var($FileInputStream, fin, $new($FileInputStream, propFile));
		$nc(this->props)->load(static_cast<$InputStream*>(fin));
		fin->close();
	} catch ($FileNotFoundException& fne) {
		println("Did not find settings file."_s);
	} catch ($IOException& ioe) {
		println($$str({"Problem reading settings, IOException: "_s, $(ioe->getMessage())}));
	}
}

void DebugSettings::loadSystemProperties() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, sysProps, $System::getProperties());
	{
		$var($Iterator, i$, $nc($($nc(sysProps)->stringPropertyNames()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($String, value, sysProps->getProperty(key, ""_s));
				if ($nc(key)->startsWith(DebugSettings::PREFIX)) {
					$nc(this->props)->setProperty(key, value);
				}
			}
		}
	}
}

bool DebugSettings::getBoolean($String* key, bool defval) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, value, getString(key, $($String::valueOf(defval))));
		return $nc(value)->equalsIgnoreCase("true"_s);
	}
}

int32_t DebugSettings::getInt($String* key, int32_t defval) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, value, getString(key, $($String::valueOf(defval))));
		return $Integer::parseInt(value);
	}
}

$String* DebugSettings::getString($String* key, $String* defval) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, actualKeyName, $str({DebugSettings::PREFIX, "."_s, key}));
		$var($String, value, $nc(this->props)->getProperty(actualKeyName, defval));
		return value;
	}
}

$List* DebugSettings::getPropertyNames() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, propNames, $new($LinkedList));
		{
			$var($Iterator, i$, $nc($($nc(this->props)->stringPropertyNames()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, propName, $cast($String, i$->next()));
				{
					$assign(propName, $nc(propName)->substring($nc(DebugSettings::PREFIX)->length() + 1));
					propNames->add(propName);
				}
			}
		}
		return propNames;
	}
}

void DebugSettings::println(Object$* object) {
	$init($PlatformLogger$Level);
	if ($nc(DebugSettings::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(DebugSettings::log)->finer($($nc($of(object))->toString()));
	}
}

void DebugSettings::setCTracingOn(bool enabled) {
	$prepareNative0(_METHOD_INDEX_setCTracingOn$13, DebugSettings, setCTracingOn, void, bool enabled);
	$invokeNative(enabled);
	$finishNative();
}

void DebugSettings::setCTracingOn(bool enabled, $String* file) {
	$prepareNative0(_METHOD_INDEX_setCTracingOn$14, DebugSettings, setCTracingOn, void, bool enabled, $String* file);
	$invokeNative(enabled, file);
	$finishNative();
}

void DebugSettings::setCTracingOn(bool enabled, $String* file, int32_t line) {
	$prepareNative0(_METHOD_INDEX_setCTracingOn$15, DebugSettings, setCTracingOn, void, bool enabled, $String* file, int32_t line);
	$invokeNative(enabled, file, line);
	$finishNative();
}

void DebugSettings::loadNativeSettings() {
	$useLocalCurrentObjectStackCache();
	bool ctracingOn = false;
	ctracingOn = getBoolean(DebugSettings::PROP_CTRACE, false);
	setCTracingOn(ctracingOn);
	$var($List, traces, $new($LinkedList));
	{
		$var($Iterator, i$, $nc($(getPropertyNames()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				bool var$0 = $nc(key)->startsWith(DebugSettings::PROP_CTRACE);
				if (var$0 && key->length() > DebugSettings::PROP_CTRACE_LEN) {
					traces->add(key);
				}
			}
		}
	}
	$Collections::sort(traces);
	{
		$var($Iterator, i$, traces->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($String, trace, $nc(key)->substring(DebugSettings::PROP_CTRACE_LEN + 1));
				$var($String, filespec, nullptr);
				$var($String, linespec, nullptr);
				int32_t delim = trace->indexOf((int32_t)u'@');
				bool enabled = false;
				$assign(filespec, delim != -1 ? trace->substring(0, delim) : trace);
				$assign(linespec, delim != -1 ? trace->substring(delim + 1) : ""_s);
				enabled = getBoolean(key, false);
				if ($nc(linespec)->length() == 0) {
					setCTracingOn(enabled, filespec);
				} else {
					int32_t linenum = $Integer::parseInt(linespec, 10);
					setCTracingOn(enabled, filespec, linenum);
				}
			}
		}
	}
}

void clinit$DebugSettings($Class* class$) {
	$assignStatic(DebugSettings::PREFIX, "awtdebug"_s);
	$assignStatic(DebugSettings::PROP_FILE, "properties"_s);
	$assignStatic(DebugSettings::PROP_CTRACE, "ctrace"_s);
	$assignStatic(DebugSettings::log, $PlatformLogger::getLogger("sun.awt.debug.DebugSettings"_s));
	$assignStatic(DebugSettings::DEFAULT_PROPS, $new($StringArray, {
		"awtdebug.assert=true"_s,
		"awtdebug.trace=false"_s,
		"awtdebug.on=true"_s,
		"awtdebug.ctrace=false"_s
	}));
	$assignStatic(DebugSettings::instance, $new(DebugSettings));
	DebugSettings::PROP_CTRACE_LEN = $nc(DebugSettings::PROP_CTRACE)->length();
}

DebugSettings::DebugSettings() {
}

$Class* DebugSettings::load$($String* name, bool initialize) {
	$loadClass(DebugSettings, name, initialize, &_DebugSettings_ClassInfo_, clinit$DebugSettings, allocate$DebugSettings);
	return class$;
}

$Class* DebugSettings::class$ = nullptr;

	} // awt
} // sun