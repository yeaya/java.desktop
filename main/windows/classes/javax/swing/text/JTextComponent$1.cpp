#include <javax/swing/text/JTextComponent$1.h>

#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$DropLocation = ::javax::swing::text::JTextComponent$DropLocation;
using $SwingAccessor$JTextComponentAccessor = ::sun::swing::SwingAccessor$JTextComponentAccessor;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _JTextComponent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextComponent$1::*)()>(&JTextComponent$1::init$))},
	{"dropLocationForPoint", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, $PUBLIC},
	{"setDropLocation", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$1_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _JTextComponent$1_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$JTextComponentAccessor", "sun.swing.SwingAccessor", "JTextComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTextComponent$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$JTextComponentAccessor",
	nullptr,
	_JTextComponent$1_MethodInfo_,
	nullptr,
	&_JTextComponent$1_EnclosingMethodInfo_,
	_JTextComponent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$1($Class* clazz) {
	return $of($alloc(JTextComponent$1));
}

void JTextComponent$1::init$() {
}

$TransferHandler$DropLocation* JTextComponent$1::dropLocationForPoint($JTextComponent* textComp, $Point* p) {
	return $nc(textComp)->dropLocationForPoint(p);
}

$Object* JTextComponent$1::setDropLocation($JTextComponent* textComp, $TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	return $of($nc(textComp)->setDropLocation(location, state, forDrop));
}

JTextComponent$1::JTextComponent$1() {
}

$Class* JTextComponent$1::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$1, name, initialize, &_JTextComponent$1_ClassInfo_, allocate$JTextComponent$1);
	return class$;
}

$Class* JTextComponent$1::class$ = nullptr;

		} // text
	} // swing
} // javax