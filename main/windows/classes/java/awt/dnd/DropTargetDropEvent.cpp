#include <java/awt/dnd/DropTargetDropEvent.h>

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

$FieldInfo _DropTargetDropEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DropTargetDropEvent, serialVersionUID)},
	{"zero", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DropTargetDropEvent, zero)},
	{"location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(DropTargetDropEvent, location)},
	{"actions", "I", nullptr, $PRIVATE, $field(DropTargetDropEvent, actions)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(DropTargetDropEvent, dropAction)},
	{"isLocalTx", "Z", nullptr, $PRIVATE, $field(DropTargetDropEvent, isLocalTx)},
	{}
};

$MethodInfo _DropTargetDropEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/Point;II)V", nullptr, $PUBLIC, $method(static_cast<void(DropTargetDropEvent::*)($DropTargetContext*,$Point*,int32_t,int32_t)>(&DropTargetDropEvent::init$))},
	{"<init>", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/Point;IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(DropTargetDropEvent::*)($DropTargetContext*,$Point*,int32_t,int32_t,bool)>(&DropTargetDropEvent::init$))},
	{"acceptDrop", "(I)V", nullptr, $PUBLIC},
	{"dropComplete", "(Z)V", nullptr, $PUBLIC},
	{"getCurrentDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"getCurrentDataFlavorsAsList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getDropAction", "()I", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getSourceActions", "()I", nullptr, $PUBLIC},
	{"getTransferable", "()Ljava/awt/datatransfer/Transferable;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"isLocalTransfer", "()Z", nullptr, $PUBLIC},
	{"rejectDrop", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DropTargetDropEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DropTargetDropEvent",
	"java.awt.dnd.DropTargetEvent",
	nullptr,
	_DropTargetDropEvent_FieldInfo_,
	_DropTargetDropEvent_MethodInfo_
};

$Object* allocate$DropTargetDropEvent($Class* clazz) {
	return $of($alloc(DropTargetDropEvent));
}

$Point* DropTargetDropEvent::zero = nullptr;

void DropTargetDropEvent::init$($DropTargetContext* dtc, $Point* cursorLocn, int32_t dropAction, int32_t srcActions) {
	$DropTargetEvent::init$(dtc);
	$set(this, location, DropTargetDropEvent::zero);
	this->actions = $DnDConstants::ACTION_NONE;
	this->dropAction = $DnDConstants::ACTION_NONE;
	this->isLocalTx = false;
	if (cursorLocn == nullptr) {
		$throwNew($NullPointerException, "cursorLocn"_s);
	}
	if (dropAction != $DnDConstants::ACTION_NONE && dropAction != $DnDConstants::ACTION_COPY && dropAction != $DnDConstants::ACTION_MOVE && dropAction != $DnDConstants::ACTION_LINK) {
		$throwNew($IllegalArgumentException, $$str({"dropAction = "_s, $$str(dropAction)}));
	}
	if (((int32_t)(srcActions & (uint32_t)~($DnDConstants::ACTION_COPY_OR_MOVE | $DnDConstants::ACTION_LINK))) != 0) {
		$throwNew($IllegalArgumentException, "srcActions"_s);
	}
	$set(this, location, cursorLocn);
	this->actions = srcActions;
	this->dropAction = dropAction;
}

void DropTargetDropEvent::init$($DropTargetContext* dtc, $Point* cursorLocn, int32_t dropAction, int32_t srcActions, bool isLocal) {
	DropTargetDropEvent::init$(dtc, cursorLocn, dropAction, srcActions);
	this->isLocalTx = isLocal;
}

$Point* DropTargetDropEvent::getLocation() {
	return this->location;
}

$DataFlavorArray* DropTargetDropEvent::getCurrentDataFlavors() {
	return $nc($(getDropTargetContext()))->getCurrentDataFlavors();
}

$List* DropTargetDropEvent::getCurrentDataFlavorsAsList() {
	return $nc($(getDropTargetContext()))->getCurrentDataFlavorsAsList();
}

bool DropTargetDropEvent::isDataFlavorSupported($DataFlavor* df) {
	return $nc($(getDropTargetContext()))->isDataFlavorSupported(df);
}

int32_t DropTargetDropEvent::getSourceActions() {
	return this->actions;
}

int32_t DropTargetDropEvent::getDropAction() {
	return this->dropAction;
}

$Transferable* DropTargetDropEvent::getTransferable() {
	return $nc($(getDropTargetContext()))->getTransferable();
}

void DropTargetDropEvent::acceptDrop(int32_t dropAction) {
	$nc($(getDropTargetContext()))->acceptDrop(dropAction);
}

void DropTargetDropEvent::rejectDrop() {
	$nc($(getDropTargetContext()))->rejectDrop();
}

void DropTargetDropEvent::dropComplete(bool success) {
	$nc($(getDropTargetContext()))->dropComplete(success);
}

bool DropTargetDropEvent::isLocalTransfer() {
	return this->isLocalTx;
}

void clinit$DropTargetDropEvent($Class* class$) {
	$assignStatic(DropTargetDropEvent::zero, $new($Point, 0, 0));
}

DropTargetDropEvent::DropTargetDropEvent() {
}

$Class* DropTargetDropEvent::load$($String* name, bool initialize) {
	$loadClass(DropTargetDropEvent, name, initialize, &_DropTargetDropEvent_ClassInfo_, clinit$DropTargetDropEvent, allocate$DropTargetDropEvent);
	return class$;
}

$Class* DropTargetDropEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java