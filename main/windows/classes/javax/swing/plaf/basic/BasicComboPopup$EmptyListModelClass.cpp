#include <javax/swing/plaf/basic/BasicComboPopup$EmptyListModelClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListModel = ::javax::swing::ListModel;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicComboPopup$EmptyListModelClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicComboPopup$EmptyListModelClass::*)()>(&BasicComboPopup$EmptyListModelClass::init$))},
	{"addListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"removeListDataListener", "(Ljavax/swing/event/ListDataListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboPopup$EmptyListModelClass_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$EmptyListModelClass", "javax.swing.plaf.basic.BasicComboPopup", "EmptyListModelClass", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicComboPopup$EmptyListModelClass_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$EmptyListModelClass",
	"java.lang.Object",
	"javax.swing.ListModel,java.io.Serializable",
	nullptr,
	_BasicComboPopup$EmptyListModelClass_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/ListModel<Ljava/lang/Object;>;Ljava/io/Serializable;",
	nullptr,
	_BasicComboPopup$EmptyListModelClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$EmptyListModelClass($Class* clazz) {
	return $of($alloc(BasicComboPopup$EmptyListModelClass));
}

int32_t BasicComboPopup$EmptyListModelClass::hashCode() {
	 return this->$ListModel::hashCode();
}

bool BasicComboPopup$EmptyListModelClass::equals(Object$* arg0) {
	 return this->$ListModel::equals(arg0);
}

$Object* BasicComboPopup$EmptyListModelClass::clone() {
	 return this->$ListModel::clone();
}

$String* BasicComboPopup$EmptyListModelClass::toString() {
	 return this->$ListModel::toString();
}

void BasicComboPopup$EmptyListModelClass::finalize() {
	this->$ListModel::finalize();
}

void BasicComboPopup$EmptyListModelClass::init$() {
}

int32_t BasicComboPopup$EmptyListModelClass::getSize() {
	return 0;
}

$Object* BasicComboPopup$EmptyListModelClass::getElementAt(int32_t index) {
	return $of(nullptr);
}

void BasicComboPopup$EmptyListModelClass::addListDataListener($ListDataListener* l) {
}

void BasicComboPopup$EmptyListModelClass::removeListDataListener($ListDataListener* l) {
}

BasicComboPopup$EmptyListModelClass::BasicComboPopup$EmptyListModelClass() {
}

$Class* BasicComboPopup$EmptyListModelClass::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$EmptyListModelClass, name, initialize, &_BasicComboPopup$EmptyListModelClass_ClassInfo_, allocate$BasicComboPopup$EmptyListModelClass);
	return class$;
}

$Class* BasicComboPopup$EmptyListModelClass::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax