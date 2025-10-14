#include <javax/swing/event/DocumentEvent$EventType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

#undef CHANGE
#undef INSERT
#undef REMOVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _DocumentEvent$EventType_FieldInfo_[] = {
	{"INSERT", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, INSERT)},
	{"REMOVE", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, REMOVE)},
	{"CHANGE", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, CHANGE)},
	{"typeString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DocumentEvent$EventType, typeString)},
	{}
};

$MethodInfo _DocumentEvent$EventType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DocumentEvent$EventType::*)($String*)>(&DocumentEvent$EventType::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DocumentEvent$EventType_InnerClassesInfo_[] = {
	{"javax.swing.event.DocumentEvent$EventType", "javax.swing.event.DocumentEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DocumentEvent$EventType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.event.DocumentEvent$EventType",
	"java.lang.Object",
	nullptr,
	_DocumentEvent$EventType_FieldInfo_,
	_DocumentEvent$EventType_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentEvent$EventType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.event.DocumentEvent"
};

$Object* allocate$DocumentEvent$EventType($Class* clazz) {
	return $of($alloc(DocumentEvent$EventType));
}


DocumentEvent$EventType* DocumentEvent$EventType::INSERT = nullptr;

DocumentEvent$EventType* DocumentEvent$EventType::REMOVE = nullptr;

DocumentEvent$EventType* DocumentEvent$EventType::CHANGE = nullptr;

void DocumentEvent$EventType::init$($String* s) {
	$set(this, typeString, s);
}

$String* DocumentEvent$EventType::toString() {
	return this->typeString;
}

void clinit$DocumentEvent$EventType($Class* class$) {
	$assignStatic(DocumentEvent$EventType::INSERT, $new(DocumentEvent$EventType, "INSERT"_s));
	$assignStatic(DocumentEvent$EventType::REMOVE, $new(DocumentEvent$EventType, "REMOVE"_s));
	$assignStatic(DocumentEvent$EventType::CHANGE, $new(DocumentEvent$EventType, "CHANGE"_s));
}

DocumentEvent$EventType::DocumentEvent$EventType() {
}

$Class* DocumentEvent$EventType::load$($String* name, bool initialize) {
	$loadClass(DocumentEvent$EventType, name, initialize, &_DocumentEvent$EventType_ClassInfo_, clinit$DocumentEvent$EventType, allocate$DocumentEvent$EventType);
	return class$;
}

$Class* DocumentEvent$EventType::class$ = nullptr;

		} // event
	} // swing
} // javax