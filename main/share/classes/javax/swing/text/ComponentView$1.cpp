#include <javax/swing/text/ComponentView$1.h>

#include <java/awt/Container.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Document = ::javax::swing::text::Document;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ComponentView$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/ComponentView;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentView$1, this$0)},
	{}
};

$MethodInfo _ComponentView$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/ComponentView;)V", nullptr, 0, $method(static_cast<void(ComponentView$1::*)($ComponentView*)>(&ComponentView$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentView$1_EnclosingMethodInfo_ = {
	"javax.swing.text.ComponentView",
	"setParent",
	"(Ljavax/swing/text/View;)V"
};

$InnerClassInfo _ComponentView$1_InnerClassesInfo_[] = {
	{"javax.swing.text.ComponentView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentView$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.ComponentView$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ComponentView$1_FieldInfo_,
	_ComponentView$1_MethodInfo_,
	nullptr,
	&_ComponentView$1_EnclosingMethodInfo_,
	_ComponentView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.ComponentView"
};

$Object* allocate$ComponentView$1($Class* clazz) {
	return $of($alloc(ComponentView$1));
}

void ComponentView$1::init$($ComponentView* this$0) {
	$set(this, this$0, this$0);
}

void ComponentView$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, this->this$0->getDocument());
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readLock();
			}
			this->this$0->setComponentParent();
			$var($Container, host, this->this$0->getContainer());
			if (host != nullptr) {
				this->this$0->preferenceChanged(nullptr, true, true);
				host->repaint();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->readUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

ComponentView$1::ComponentView$1() {
}

$Class* ComponentView$1::load$($String* name, bool initialize) {
	$loadClass(ComponentView$1, name, initialize, &_ComponentView$1_ClassInfo_, allocate$ComponentView$1);
	return class$;
}

$Class* ComponentView$1::class$ = nullptr;

		} // text
	} // swing
} // javax