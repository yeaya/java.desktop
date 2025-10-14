#include <javax/swing/undo/UndoManager$Action.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

#undef ANY
#undef REDO
#undef UNDO

using $UndoManager$ActionArray = $Array<::javax::swing::undo::UndoManager$Action>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndoManager = ::javax::swing::undo::UndoManager;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _UndoManager$Action_FieldInfo_[] = {
	{"UNDO", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, UNDO)},
	{"REDO", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, REDO)},
	{"ANY", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, ANY)},
	{"$VALUES", "[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UndoManager$Action, $VALUES)},
	{}
};

$MethodInfo _UndoManager$Action_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UndoManager$ActionArray*(*)()>(&UndoManager$Action::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(UndoManager$Action::*)($String*,int32_t)>(&UndoManager$Action::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<UndoManager$Action*(*)($String*)>(&UndoManager$Action::valueOf))},
	{"values", "()[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UndoManager$ActionArray*(*)()>(&UndoManager$Action::values))},
	{}
};

$InnerClassInfo _UndoManager$Action_InnerClassesInfo_[] = {
	{"javax.swing.undo.UndoManager$Action", "javax.swing.undo.UndoManager", "Action", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UndoManager$Action_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.undo.UndoManager$Action",
	"java.lang.Enum",
	nullptr,
	_UndoManager$Action_FieldInfo_,
	_UndoManager$Action_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/undo/UndoManager$Action;>;",
	nullptr,
	_UndoManager$Action_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.undo.UndoManager"
};

$Object* allocate$UndoManager$Action($Class* clazz) {
	return $of($alloc(UndoManager$Action));
}

UndoManager$Action* UndoManager$Action::UNDO = nullptr;
UndoManager$Action* UndoManager$Action::REDO = nullptr;
UndoManager$Action* UndoManager$Action::ANY = nullptr;
$UndoManager$ActionArray* UndoManager$Action::$VALUES = nullptr;

$UndoManager$ActionArray* UndoManager$Action::$values() {
	$init(UndoManager$Action);
	return $new($UndoManager$ActionArray, {
		UndoManager$Action::UNDO,
		UndoManager$Action::REDO,
		UndoManager$Action::ANY
	});
}

$UndoManager$ActionArray* UndoManager$Action::values() {
	$init(UndoManager$Action);
	return $cast($UndoManager$ActionArray, UndoManager$Action::$VALUES->clone());
}

UndoManager$Action* UndoManager$Action::valueOf($String* name) {
	$init(UndoManager$Action);
	return $cast(UndoManager$Action, $Enum::valueOf(UndoManager$Action::class$, name));
}

void UndoManager$Action::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$UndoManager$Action($Class* class$) {
	$assignStatic(UndoManager$Action::UNDO, $new(UndoManager$Action, "UNDO"_s, 0));
	$assignStatic(UndoManager$Action::REDO, $new(UndoManager$Action, "REDO"_s, 1));
	$assignStatic(UndoManager$Action::ANY, $new(UndoManager$Action, "ANY"_s, 2));
	$assignStatic(UndoManager$Action::$VALUES, UndoManager$Action::$values());
}

UndoManager$Action::UndoManager$Action() {
}

$Class* UndoManager$Action::load$($String* name, bool initialize) {
	$loadClass(UndoManager$Action, name, initialize, &_UndoManager$Action_ClassInfo_, clinit$UndoManager$Action, allocate$UndoManager$Action);
	return class$;
}

$Class* UndoManager$Action::class$ = nullptr;

		} // undo
	} // swing
} // javax