#include <javax/swing/DebugGraphicsInfo.h>

#include <java/awt/Color.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

namespace javax {
	namespace swing {

$FieldInfo _DebugGraphicsInfo_FieldInfo_[] = {
	{"flashColor", "Ljava/awt/Color;", nullptr, 0, $field(DebugGraphicsInfo, flashColor)},
	{"flashTime", "I", nullptr, 0, $field(DebugGraphicsInfo, flashTime)},
	{"flashCount", "I", nullptr, 0, $field(DebugGraphicsInfo, flashCount)},
	{"componentToDebug", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/JComponent;Ljava/lang/Integer;>;", 0, $field(DebugGraphicsInfo, componentToDebug)},
	{"debugFrame", "Ljavax/swing/JFrame;", nullptr, 0, $field(DebugGraphicsInfo, debugFrame)},
	{"stream", "Ljava/io/PrintStream;", nullptr, 0, $field(DebugGraphicsInfo, stream)},
	{}
};

$MethodInfo _DebugGraphicsInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DebugGraphicsInfo::*)()>(&DebugGraphicsInfo::init$))},
	{"getDebugOptions", "(Ljavax/swing/JComponent;)I", nullptr, 0},
	{"log", "(Ljava/lang/String;)V", nullptr, 0},
	{"setDebugOptions", "(Ljavax/swing/JComponent;I)V", nullptr, 0},
	{}
};

$ClassInfo _DebugGraphicsInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.DebugGraphicsInfo",
	"java.lang.Object",
	nullptr,
	_DebugGraphicsInfo_FieldInfo_,
	_DebugGraphicsInfo_MethodInfo_
};

$Object* allocate$DebugGraphicsInfo($Class* clazz) {
	return $of($alloc(DebugGraphicsInfo));
}

void DebugGraphicsInfo::init$() {
	$init($Color);
	$set(this, flashColor, $Color::red);
	this->flashTime = 100;
	this->flashCount = 2;
	$set(this, debugFrame, nullptr);
	$set(this, stream, $System::out);
}

void DebugGraphicsInfo::setDebugOptions($JComponent* component, int32_t debug) {
	if (debug == 0) {
		return;
	}
	if (this->componentToDebug == nullptr) {
		$set(this, componentToDebug, $new($Hashtable));
	}
	if (debug > 0) {
		$nc(this->componentToDebug)->put(component, $($Integer::valueOf(debug)));
	} else {
		$nc(this->componentToDebug)->remove(component);
	}
}

int32_t DebugGraphicsInfo::getDebugOptions($JComponent* component) {
	if (this->componentToDebug == nullptr) {
		return 0;
	} else {
		$var($Integer, integer, $cast($Integer, $nc(this->componentToDebug)->get(component)));
		return integer == nullptr ? 0 : $nc(integer)->intValue();
	}
}

void DebugGraphicsInfo::log($String* string) {
	$nc(this->stream)->println(string);
}

DebugGraphicsInfo::DebugGraphicsInfo() {
}

$Class* DebugGraphicsInfo::load$($String* name, bool initialize) {
	$loadClass(DebugGraphicsInfo, name, initialize, &_DebugGraphicsInfo_ClassInfo_, allocate$DebugGraphicsInfo);
	return class$;
}

$Class* DebugGraphicsInfo::class$ = nullptr;

	} // swing
} // javax