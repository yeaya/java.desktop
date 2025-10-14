#include <javax/swing/Box$Filler$AccessibleBoxFiller.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef FILLER

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $Box$Filler = ::javax::swing::Box$Filler;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _Box$Filler$AccessibleBoxFiller_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/Box$Filler;", nullptr, $FINAL | $SYNTHETIC, $field(Box$Filler$AccessibleBoxFiller, this$0)},
	{}
};

$MethodInfo _Box$Filler$AccessibleBoxFiller_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Box$Filler;)V", nullptr, $PROTECTED, $method(static_cast<void(Box$Filler$AccessibleBoxFiller::*)($Box$Filler*)>(&Box$Filler$AccessibleBoxFiller::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Box$Filler$AccessibleBoxFiller_InnerClassesInfo_[] = {
	{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
	{"javax.swing.Box$Filler$AccessibleBoxFiller", "javax.swing.Box$Filler", "AccessibleBoxFiller", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Box$Filler$AccessibleBoxFiller_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Box$Filler$AccessibleBoxFiller",
	"java.awt.Component$AccessibleAWTComponent",
	nullptr,
	_Box$Filler$AccessibleBoxFiller_FieldInfo_,
	_Box$Filler$AccessibleBoxFiller_MethodInfo_,
	nullptr,
	nullptr,
	_Box$Filler$AccessibleBoxFiller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Box"
};

$Object* allocate$Box$Filler$AccessibleBoxFiller($Class* clazz) {
	return $of($alloc(Box$Filler$AccessibleBoxFiller));
}

void Box$Filler$AccessibleBoxFiller::init$($Box$Filler* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleRole* Box$Filler$AccessibleBoxFiller::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILLER;
}

Box$Filler$AccessibleBoxFiller::Box$Filler$AccessibleBoxFiller() {
}

$Class* Box$Filler$AccessibleBoxFiller::load$($String* name, bool initialize) {
	$loadClass(Box$Filler$AccessibleBoxFiller, name, initialize, &_Box$Filler$AccessibleBoxFiller_ClassInfo_, allocate$Box$Filler$AccessibleBoxFiller);
	return class$;
}

$Class* Box$Filler$AccessibleBoxFiller::class$ = nullptr;

	} // swing
} // javax