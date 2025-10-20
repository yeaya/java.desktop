#include <java/awt/dnd/DropTargetDragEvent.h>

#include <java/awt/Point.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_COPY_OR_MOVE
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Point = ::java::awt::Point;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DropTargetDragEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTargetDragEvent, serialVersionUID)},
	{"location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTargetDragEvent, location)},
	{"actions", "I", nullptr, $PRIVATE, $field(DropTargetDragEvent, actions)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(DropTargetDragEvent, dropAction)},
	{}
};

$MethodInfo _DropTargetDragEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/Point;II)V", nullptr, $PUBLIC, $method(static_cast<void(DropTargetDragEvent::*)($DropTargetContext*,$Point*,int32_t,int32_t)>(&DropTargetDragEvent::init$))},
	{"acceptDrag", "(I)V", nullptr, $PUBLIC},
	{"getCurrentDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"getCurrentDataFlavorsAsList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getDropAction", "()I", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSourceActions", "()I", nullptr, $PUBLIC},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"rejectDrag", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DropTargetDragEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTargetDragEvent",
	"java.awt.dnd.DropTargetEvent",
	nullptr,
	_DropTargetDragEvent_FieldInfo_,
	_DropTargetDragEvent_MethodInfo_
};

$Object* allocate$DropTargetDragEvent($Class* clazz) {
	return $of($alloc(DropTargetDragEvent));
}

void DropTargetDragEvent::init$($DropTargetContext* dtc, $Point* cursorLocn, int32_t dropAction, int32_t srcActions) {
	$useLocalCurrentObjectStackCache();
	$DropTargetEvent::init$(dtc);
	if (cursorLocn == nullptr) {
		$throwNew($NullPointerException, "cursorLocn"_s);
	}
	if (dropAction != $DnDConstants::ACTION_NONE && dropAction != $DnDConstants::ACTION_COPY && dropAction != $DnDConstants::ACTION_MOVE && dropAction != $DnDConstants::ACTION_LINK) {
		$throwNew($IllegalArgumentException, $$str({"dropAction"_s, $$str(dropAction)}));
	}
	if (((int32_t)(srcActions & (uint32_t)~($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK))) != 0) {
		$throwNew($IllegalArgumentException, "srcActions"_s);
	}
	$set(this, location, cursorLocn);
	this->actions = srcActions;
	this->dropAction = dropAction;
}

$Point* DropTargetDragEvent::getLocation() {
	return this->location;
}

$DataFlavorArray* DropTargetDragEvent::getCurrentDataFlavors() {
	return $nc($(getDropTargetContext()))->getCurrentDataFlavors();
}

$List* DropTargetDragEvent::getCurrentDataFlavorsAsList() {
	return $nc($(getDropTargetContext()))->getCurrentDataFlavorsAsList();
}

bool DropTargetDragEvent::isDataFlavorSupported($DataFlavor* df) {
	return $nc($(getDropTargetContext()))->isDataFlavorSupported(df);
}

int32_t DropTargetDragEvent::getSourceActions() {
	return this->actions;
}

int32_t DropTargetDragEvent::getDropAction() {
	return this->dropAction;
}

$Transferable* DropTargetDragEvent::getTransferable() {
	return $nc($(getDropTargetContext()))->getTransferable();
}

void DropTargetDragEvent::acceptDrag(int32_t dragOperation) {
	$nc($(getDropTargetContext()))->acceptDrag(dragOperation);
}

void DropTargetDragEvent::rejectDrag() {
	$nc($(getDropTargetContext()))->rejectDrag();
}

DropTargetDragEvent::DropTargetDragEvent() {
}

$Class* DropTargetDragEvent::load$($String* name, bool initialize) {
	$loadClass(DropTargetDragEvent, name, initialize, &_DropTargetDragEvent_ClassInfo_, allocate$DropTargetDragEvent);
	return class$;
}

$Class* DropTargetDragEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java