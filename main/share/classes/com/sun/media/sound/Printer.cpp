#include <com/sun/media/sound/Printer.h>

#include <java/lang/CharSequence.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SHOW_THREADID
#undef SHOW_TIMESTAMP

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _Printer_FieldInfo_[] = {
	{"err", "Z", nullptr, $STATIC | $FINAL, $staticField(Printer, err$)},
	{"SHOW_THREADID", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Printer, SHOW_THREADID)},
	{"SHOW_TIMESTAMP", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Printer, SHOW_TIMESTAMP)},
	{"startTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(Printer, startTime)},
	{}
};

$MethodInfo _Printer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Printer::*)()>(&Printer::init$))},
	{"err", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&Printer::err))},
	{"isBuildInternal", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Printer::isBuildInternal))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Printer::println))},
	{}
};

$ClassInfo _Printer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.Printer",
	"java.lang.Object",
	nullptr,
	_Printer_FieldInfo_,
	_Printer_MethodInfo_
};

$Object* allocate$Printer($Class* clazz) {
	return $of($alloc(Printer));
}

bool Printer::err$ = false;
int64_t Printer::startTime = 0;

void Printer::init$() {
}

void Printer::err($String* str) {
	$init(Printer);
	if (Printer::err$) {
		println(str);
	}
}

bool Printer::isBuildInternal() {
	$init(Printer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, javaVersion, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "java.version"_s)))));
	return javaVersion != nullptr && javaVersion->contains("internal"_s);
}

void Printer::println($String* s) {
	$init(Printer);
	$useLocalCurrentObjectStackCache();
	$var($String, prepend, ""_s);
	{
		$assign(prepend, $str({"thread "_s, $$str($($Thread::currentThread())->getId()), " "_s, prepend}));
	}
	{
		if (Printer::startTime == 0) {
			Printer::startTime = $div($System::nanoTime(), (int64_t)1000000);
		}
		$assign(prepend, $str({prepend, $$str((($div($System::nanoTime(), (int64_t)1000000)) - Printer::startTime)), "millis: "_s}));
	}
	$nc($System::out)->println($$str({prepend, s}));
}

void clinit$Printer($Class* class$) {
	Printer::err$ = Printer::isBuildInternal();
	Printer::startTime = 0;
}

Printer::Printer() {
}

$Class* Printer::load$($String* name, bool initialize) {
	$loadClass(Printer, name, initialize, &_Printer_ClassInfo_, clinit$Printer, allocate$Printer);
	return class$;
}

$Class* Printer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com