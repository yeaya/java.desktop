#include <javax/swing/SpringLayout$SpringProxy.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;

namespace javax {
	namespace swing {

$FieldInfo _SpringLayout$SpringProxy_FieldInfo_[] = {
	{"edgeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, edgeName)},
	{"c", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, c)},
	{"l", "Ljavax/swing/SpringLayout;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, l)},
	{}
};

$MethodInfo _SpringLayout$SpringProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/SpringLayout;)V", nullptr, $PUBLIC, $method(static_cast<void(SpringLayout$SpringProxy::*)($String*,$Component*,$SpringLayout*)>(&SpringLayout$SpringProxy::init$))},
	{"getConstraint", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(static_cast<$Spring*(SpringLayout$SpringProxy::*)()>(&SpringLayout$SpringProxy::getConstraint))},
	{"getMaximumValue", "()I", nullptr, $PUBLIC},
	{"getMinimumValue", "()I", nullptr, $PUBLIC},
	{"getPreferredValue", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0},
	{"setValue", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpringLayout$SpringProxy_InnerClassesInfo_[] = {
	{"javax.swing.SpringLayout$SpringProxy", "javax.swing.SpringLayout", "SpringProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SpringLayout$SpringProxy_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SpringLayout$SpringProxy",
	"javax.swing.Spring",
	nullptr,
	_SpringLayout$SpringProxy_FieldInfo_,
	_SpringLayout$SpringProxy_MethodInfo_,
	nullptr,
	nullptr,
	_SpringLayout$SpringProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SpringLayout"
};

$Object* allocate$SpringLayout$SpringProxy($Class* clazz) {
	return $of($alloc(SpringLayout$SpringProxy));
}

void SpringLayout$SpringProxy::init$($String* edgeName, $Component* c, $SpringLayout* l) {
	$Spring::init$();
	$set(this, edgeName, edgeName);
	$set(this, c, c);
	$set(this, l, l);
}

$Spring* SpringLayout$SpringProxy::getConstraint() {
	return $nc($($nc(this->l)->getConstraints(this->c)))->getConstraint(this->edgeName);
}

int32_t SpringLayout$SpringProxy::getMinimumValue() {
	return $nc($(getConstraint()))->getMinimumValue();
}

int32_t SpringLayout$SpringProxy::getPreferredValue() {
	return $nc($(getConstraint()))->getPreferredValue();
}

int32_t SpringLayout$SpringProxy::getMaximumValue() {
	return $nc($(getConstraint()))->getMaximumValue();
}

int32_t SpringLayout$SpringProxy::getValue() {
	return $nc($(getConstraint()))->getValue();
}

void SpringLayout$SpringProxy::setValue(int32_t size) {
	$nc($(getConstraint()))->setValue(size);
}

bool SpringLayout$SpringProxy::isCyclic($SpringLayout* l) {
	return $nc(l)->isCyclic($(getConstraint()));
}

$String* SpringLayout$SpringProxy::toString() {
	return $str({"SpringProxy for "_s, this->edgeName, " edge of "_s, $($nc(this->c)->getName()), "."_s});
}

SpringLayout$SpringProxy::SpringLayout$SpringProxy() {
}

$Class* SpringLayout$SpringProxy::load$($String* name, bool initialize) {
	$loadClass(SpringLayout$SpringProxy, name, initialize, &_SpringLayout$SpringProxy_ClassInfo_, allocate$SpringLayout$SpringProxy);
	return class$;
}

$Class* SpringLayout$SpringProxy::class$ = nullptr;

	} // swing
} // javax