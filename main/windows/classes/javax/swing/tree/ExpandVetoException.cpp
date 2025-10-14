#include <javax/swing/tree/ExpandVetoException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _ExpandVetoException_FieldInfo_[] = {
	{"event", "Ljavax/swing/event/TreeExpansionEvent;", nullptr, $PROTECTED, $field(ExpandVetoException, event)},
	{}
};

$MethodInfo _ExpandVetoException_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(ExpandVetoException::*)($TreeExpansionEvent*)>(&ExpandVetoException::init$))},
	{"<init>", "(Ljavax/swing/event/TreeExpansionEvent;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ExpandVetoException::*)($TreeExpansionEvent*,$String*)>(&ExpandVetoException::init$))},
	{}
};

$ClassInfo _ExpandVetoException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.ExpandVetoException",
	"java.lang.Exception",
	nullptr,
	_ExpandVetoException_FieldInfo_,
	_ExpandVetoException_MethodInfo_
};

$Object* allocate$ExpandVetoException($Class* clazz) {
	return $of($alloc(ExpandVetoException));
}

void ExpandVetoException::init$($TreeExpansionEvent* event) {
	ExpandVetoException::init$(event, nullptr);
}

void ExpandVetoException::init$($TreeExpansionEvent* event, $String* message) {
	$Exception::init$(message);
	$set(this, event, event);
}

ExpandVetoException::ExpandVetoException() {
}

ExpandVetoException::ExpandVetoException(const ExpandVetoException& e) {
}

ExpandVetoException ExpandVetoException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ExpandVetoException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ExpandVetoException::load$($String* name, bool initialize) {
	$loadClass(ExpandVetoException, name, initialize, &_ExpandVetoException_ClassInfo_, allocate$ExpandVetoException);
	return class$;
}

$Class* ExpandVetoException::class$ = nullptr;

		} // tree
	} // swing
} // javax