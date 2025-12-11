#include <sun/awt/X11/InfoWindow$Balloon$Message.h>

#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Balloon$Message_FieldInfo_[] = {
	{"caption", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, caption)},
	{"text", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, text)},
	{"messageType", "Ljava/lang/String;", nullptr, 0, $field(InfoWindow$Balloon$Message, messageType)},
	{}
};

$MethodInfo _InfoWindow$Balloon$Message_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(InfoWindow$Balloon$Message::*)($String*,$String*,$String*)>(&InfoWindow$Balloon$Message::init$))},
	{}
};

$InnerClassInfo _InfoWindow$Balloon$Message_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$Message", "sun.awt.X11.InfoWindow$Balloon", "Message", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _InfoWindow$Balloon$Message_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.InfoWindow$Balloon$Message",
	"java.lang.Object",
	nullptr,
	_InfoWindow$Balloon$Message_FieldInfo_,
	_InfoWindow$Balloon$Message_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Balloon$Message_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$Message($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$Message));
}

void InfoWindow$Balloon$Message::init$($String* caption, $String* text, $String* messageType) {
	$set(this, caption, caption);
	$set(this, text, text);
	$set(this, messageType, messageType);
}

InfoWindow$Balloon$Message::InfoWindow$Balloon$Message() {
}

$Class* InfoWindow$Balloon$Message::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$Message, name, initialize, &_InfoWindow$Balloon$Message_ClassInfo_, allocate$InfoWindow$Balloon$Message);
	return class$;
}

$Class* InfoWindow$Balloon$Message::class$ = nullptr;

		} // X11
	} // awt
} // sun