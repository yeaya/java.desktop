#include <java/awt/ScrollPane$PeerFixer.h>

#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ScrollPanePeer.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Adjustable = ::java::awt::Adjustable;
using $Component = ::java::awt::Component;
using $ScrollPane = ::java::awt::ScrollPane;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _ScrollPane$PeerFixer_FieldInfo_[] = {
	{"this$0", "Ljava/awt/ScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollPane$PeerFixer, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPane$PeerFixer, serialVersionUID)},
	{"scroller", "Ljava/awt/ScrollPane;", nullptr, $PRIVATE, $field(ScrollPane$PeerFixer, scroller)},
	{}
};

$MethodInfo _ScrollPane$PeerFixer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/ScrollPane;Ljava/awt/ScrollPane;)V", nullptr, 0, $method(static_cast<void(ScrollPane$PeerFixer::*)($ScrollPane*,$ScrollPane*)>(&ScrollPane$PeerFixer::init$))},
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScrollPane$PeerFixer_InnerClassesInfo_[] = {
	{"java.awt.ScrollPane$PeerFixer", "java.awt.ScrollPane", "PeerFixer", 0},
	{}
};

$ClassInfo _ScrollPane$PeerFixer_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.ScrollPane$PeerFixer",
	"java.lang.Object",
	"java.awt.event.AdjustmentListener,java.io.Serializable",
	_ScrollPane$PeerFixer_FieldInfo_,
	_ScrollPane$PeerFixer_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollPane$PeerFixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ScrollPane"
};

$Object* allocate$ScrollPane$PeerFixer($Class* clazz) {
	return $of($alloc(ScrollPane$PeerFixer));
}

int32_t ScrollPane$PeerFixer::hashCode() {
	 return this->$AdjustmentListener::hashCode();
}

bool ScrollPane$PeerFixer::equals(Object$* arg0) {
	 return this->$AdjustmentListener::equals(arg0);
}

$Object* ScrollPane$PeerFixer::clone() {
	 return this->$AdjustmentListener::clone();
}

$String* ScrollPane$PeerFixer::toString() {
	 return this->$AdjustmentListener::toString();
}

void ScrollPane$PeerFixer::finalize() {
	this->$AdjustmentListener::finalize();
}

void ScrollPane$PeerFixer::init$($ScrollPane* this$0, $ScrollPane* scroller) {
	$set(this, this$0, this$0);
	$set(this, scroller, scroller);
}

void ScrollPane$PeerFixer::adjustmentValueChanged($AdjustmentEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Adjustable, adj, $nc(e)->getAdjustable());
	int32_t value = e->getValue();
	$var($ScrollPanePeer, peer, $cast($ScrollPanePeer, $nc(this->scroller)->peer));
	if (peer != nullptr) {
		peer->setValue(adj, value);
	}
	$var($Component, c, $nc(this->scroller)->getComponent(0));
	switch ($nc(adj)->getOrientation()) {
	case $Adjustable::VERTICAL:
		{
			$nc(c)->move($nc($(c->getLocation()))->x, -(value));
			break;
		}
	case $Adjustable::HORIZONTAL:
		{
			$nc(c)->move(-(value), $nc($(c->getLocation()))->y);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Illegal adjustable orientation"_s);
		}
	}
}

ScrollPane$PeerFixer::ScrollPane$PeerFixer() {
}

$Class* ScrollPane$PeerFixer::load$($String* name, bool initialize) {
	$loadClass(ScrollPane$PeerFixer, name, initialize, &_ScrollPane$PeerFixer_ClassInfo_, allocate$ScrollPane$PeerFixer);
	return class$;
}

$Class* ScrollPane$PeerFixer::class$ = nullptr;

	} // awt
} // java