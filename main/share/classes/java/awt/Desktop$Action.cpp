#include <java/awt/Desktop$Action.h>

#include <java/awt/Desktop.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef APP_ABOUT
#undef APP_EVENT_FOREGROUND
#undef APP_EVENT_HIDDEN
#undef APP_EVENT_REOPENED
#undef APP_EVENT_SCREEN_SLEEP
#undef APP_EVENT_SYSTEM_SLEEP
#undef APP_EVENT_USER_SESSION
#undef APP_HELP_VIEWER
#undef APP_MENU_BAR
#undef APP_OPEN_FILE
#undef APP_OPEN_URI
#undef APP_PREFERENCES
#undef APP_PRINT_FILE
#undef APP_QUIT_HANDLER
#undef APP_QUIT_STRATEGY
#undef APP_REQUEST_FOREGROUND
#undef APP_SUDDEN_TERMINATION
#undef BROWSE
#undef BROWSE_FILE_DIR
#undef EDIT
#undef MAIL
#undef MOVE_TO_TRASH
#undef OPEN
#undef PRINT

using $Desktop$ActionArray = $Array<::java::awt::Desktop$Action>;
using $Desktop = ::java::awt::Desktop;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Desktop$Action_FieldInfo_[] = {
	{"OPEN", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, OPEN)},
	{"EDIT", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, EDIT)},
	{"PRINT", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, PRINT)},
	{"MAIL", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, MAIL)},
	{"BROWSE", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, BROWSE)},
	{"APP_EVENT_FOREGROUND", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_FOREGROUND)},
	{"APP_EVENT_HIDDEN", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_HIDDEN)},
	{"APP_EVENT_REOPENED", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_REOPENED)},
	{"APP_EVENT_SCREEN_SLEEP", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_SCREEN_SLEEP)},
	{"APP_EVENT_SYSTEM_SLEEP", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_SYSTEM_SLEEP)},
	{"APP_EVENT_USER_SESSION", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_EVENT_USER_SESSION)},
	{"APP_ABOUT", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_ABOUT)},
	{"APP_PREFERENCES", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_PREFERENCES)},
	{"APP_OPEN_FILE", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_OPEN_FILE)},
	{"APP_PRINT_FILE", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_PRINT_FILE)},
	{"APP_OPEN_URI", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_OPEN_URI)},
	{"APP_QUIT_HANDLER", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_QUIT_HANDLER)},
	{"APP_QUIT_STRATEGY", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_QUIT_STRATEGY)},
	{"APP_SUDDEN_TERMINATION", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_SUDDEN_TERMINATION)},
	{"APP_REQUEST_FOREGROUND", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_REQUEST_FOREGROUND)},
	{"APP_HELP_VIEWER", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_HELP_VIEWER)},
	{"APP_MENU_BAR", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, APP_MENU_BAR)},
	{"BROWSE_FILE_DIR", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, BROWSE_FILE_DIR)},
	{"MOVE_TO_TRASH", "Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Desktop$Action, MOVE_TO_TRASH)},
	{"$VALUES", "[Ljava/awt/Desktop$Action;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Desktop$Action, $VALUES)},
	{}
};

$MethodInfo _Desktop$Action_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Desktop$Action;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Desktop$ActionArray*(*)()>(&Desktop$Action::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Desktop$Action::*)($String*,int32_t)>(&Desktop$Action::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Desktop$Action*(*)($String*)>(&Desktop$Action::valueOf))},
	{"values", "()[Ljava/awt/Desktop$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Desktop$ActionArray*(*)()>(&Desktop$Action::values))},
	{}
};

$InnerClassInfo _Desktop$Action_InnerClassesInfo_[] = {
	{"java.awt.Desktop$Action", "java.awt.Desktop", "Action", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Desktop$Action_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Desktop$Action",
	"java.lang.Enum",
	nullptr,
	_Desktop$Action_FieldInfo_,
	_Desktop$Action_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Desktop$Action;>;",
	nullptr,
	_Desktop$Action_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Desktop"
};

$Object* allocate$Desktop$Action($Class* clazz) {
	return $of($alloc(Desktop$Action));
}

Desktop$Action* Desktop$Action::OPEN = nullptr;
Desktop$Action* Desktop$Action::EDIT = nullptr;
Desktop$Action* Desktop$Action::PRINT = nullptr;
Desktop$Action* Desktop$Action::MAIL = nullptr;
Desktop$Action* Desktop$Action::BROWSE = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_FOREGROUND = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_HIDDEN = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_REOPENED = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_SCREEN_SLEEP = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_SYSTEM_SLEEP = nullptr;
Desktop$Action* Desktop$Action::APP_EVENT_USER_SESSION = nullptr;
Desktop$Action* Desktop$Action::APP_ABOUT = nullptr;
Desktop$Action* Desktop$Action::APP_PREFERENCES = nullptr;
Desktop$Action* Desktop$Action::APP_OPEN_FILE = nullptr;
Desktop$Action* Desktop$Action::APP_PRINT_FILE = nullptr;
Desktop$Action* Desktop$Action::APP_OPEN_URI = nullptr;
Desktop$Action* Desktop$Action::APP_QUIT_HANDLER = nullptr;
Desktop$Action* Desktop$Action::APP_QUIT_STRATEGY = nullptr;
Desktop$Action* Desktop$Action::APP_SUDDEN_TERMINATION = nullptr;
Desktop$Action* Desktop$Action::APP_REQUEST_FOREGROUND = nullptr;
Desktop$Action* Desktop$Action::APP_HELP_VIEWER = nullptr;
Desktop$Action* Desktop$Action::APP_MENU_BAR = nullptr;
Desktop$Action* Desktop$Action::BROWSE_FILE_DIR = nullptr;
Desktop$Action* Desktop$Action::MOVE_TO_TRASH = nullptr;
$Desktop$ActionArray* Desktop$Action::$VALUES = nullptr;

$Desktop$ActionArray* Desktop$Action::$values() {
	$init(Desktop$Action);
	return $new($Desktop$ActionArray, {
		Desktop$Action::OPEN,
		Desktop$Action::EDIT,
		Desktop$Action::PRINT,
		Desktop$Action::MAIL,
		Desktop$Action::BROWSE,
		Desktop$Action::APP_EVENT_FOREGROUND,
		Desktop$Action::APP_EVENT_HIDDEN,
		Desktop$Action::APP_EVENT_REOPENED,
		Desktop$Action::APP_EVENT_SCREEN_SLEEP,
		Desktop$Action::APP_EVENT_SYSTEM_SLEEP,
		Desktop$Action::APP_EVENT_USER_SESSION,
		Desktop$Action::APP_ABOUT,
		Desktop$Action::APP_PREFERENCES,
		Desktop$Action::APP_OPEN_FILE,
		Desktop$Action::APP_PRINT_FILE,
		Desktop$Action::APP_OPEN_URI,
		Desktop$Action::APP_QUIT_HANDLER,
		Desktop$Action::APP_QUIT_STRATEGY,
		Desktop$Action::APP_SUDDEN_TERMINATION,
		Desktop$Action::APP_REQUEST_FOREGROUND,
		Desktop$Action::APP_HELP_VIEWER,
		Desktop$Action::APP_MENU_BAR,
		Desktop$Action::BROWSE_FILE_DIR,
		Desktop$Action::MOVE_TO_TRASH
	});
}

$Desktop$ActionArray* Desktop$Action::values() {
	$init(Desktop$Action);
	return $cast($Desktop$ActionArray, Desktop$Action::$VALUES->clone());
}

Desktop$Action* Desktop$Action::valueOf($String* name) {
	$init(Desktop$Action);
	return $cast(Desktop$Action, $Enum::valueOf(Desktop$Action::class$, name));
}

void Desktop$Action::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Desktop$Action($Class* class$) {
	$assignStatic(Desktop$Action::OPEN, $new(Desktop$Action, "OPEN"_s, 0));
	$assignStatic(Desktop$Action::EDIT, $new(Desktop$Action, "EDIT"_s, 1));
	$assignStatic(Desktop$Action::PRINT, $new(Desktop$Action, "PRINT"_s, 2));
	$assignStatic(Desktop$Action::MAIL, $new(Desktop$Action, "MAIL"_s, 3));
	$assignStatic(Desktop$Action::BROWSE, $new(Desktop$Action, "BROWSE"_s, 4));
	$assignStatic(Desktop$Action::APP_EVENT_FOREGROUND, $new(Desktop$Action, "APP_EVENT_FOREGROUND"_s, 5));
	$assignStatic(Desktop$Action::APP_EVENT_HIDDEN, $new(Desktop$Action, "APP_EVENT_HIDDEN"_s, 6));
	$assignStatic(Desktop$Action::APP_EVENT_REOPENED, $new(Desktop$Action, "APP_EVENT_REOPENED"_s, 7));
	$assignStatic(Desktop$Action::APP_EVENT_SCREEN_SLEEP, $new(Desktop$Action, "APP_EVENT_SCREEN_SLEEP"_s, 8));
	$assignStatic(Desktop$Action::APP_EVENT_SYSTEM_SLEEP, $new(Desktop$Action, "APP_EVENT_SYSTEM_SLEEP"_s, 9));
	$assignStatic(Desktop$Action::APP_EVENT_USER_SESSION, $new(Desktop$Action, "APP_EVENT_USER_SESSION"_s, 10));
	$assignStatic(Desktop$Action::APP_ABOUT, $new(Desktop$Action, "APP_ABOUT"_s, 11));
	$assignStatic(Desktop$Action::APP_PREFERENCES, $new(Desktop$Action, "APP_PREFERENCES"_s, 12));
	$assignStatic(Desktop$Action::APP_OPEN_FILE, $new(Desktop$Action, "APP_OPEN_FILE"_s, 13));
	$assignStatic(Desktop$Action::APP_PRINT_FILE, $new(Desktop$Action, "APP_PRINT_FILE"_s, 14));
	$assignStatic(Desktop$Action::APP_OPEN_URI, $new(Desktop$Action, "APP_OPEN_URI"_s, 15));
	$assignStatic(Desktop$Action::APP_QUIT_HANDLER, $new(Desktop$Action, "APP_QUIT_HANDLER"_s, 16));
	$assignStatic(Desktop$Action::APP_QUIT_STRATEGY, $new(Desktop$Action, "APP_QUIT_STRATEGY"_s, 17));
	$assignStatic(Desktop$Action::APP_SUDDEN_TERMINATION, $new(Desktop$Action, "APP_SUDDEN_TERMINATION"_s, 18));
	$assignStatic(Desktop$Action::APP_REQUEST_FOREGROUND, $new(Desktop$Action, "APP_REQUEST_FOREGROUND"_s, 19));
	$assignStatic(Desktop$Action::APP_HELP_VIEWER, $new(Desktop$Action, "APP_HELP_VIEWER"_s, 20));
	$assignStatic(Desktop$Action::APP_MENU_BAR, $new(Desktop$Action, "APP_MENU_BAR"_s, 21));
	$assignStatic(Desktop$Action::BROWSE_FILE_DIR, $new(Desktop$Action, "BROWSE_FILE_DIR"_s, 22));
	$assignStatic(Desktop$Action::MOVE_TO_TRASH, $new(Desktop$Action, "MOVE_TO_TRASH"_s, 23));
	$assignStatic(Desktop$Action::$VALUES, Desktop$Action::$values());
}

Desktop$Action::Desktop$Action() {
}

$Class* Desktop$Action::load$($String* name, bool initialize) {
	$loadClass(Desktop$Action, name, initialize, &_Desktop$Action_ClassInfo_, clinit$Desktop$Action, allocate$Desktop$Action);
	return class$;
}

$Class* Desktop$Action::class$ = nullptr;

	} // awt
} // java