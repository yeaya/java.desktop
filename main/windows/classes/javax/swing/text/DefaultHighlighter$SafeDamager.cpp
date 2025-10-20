#include <javax/swing/text/DefaultHighlighter$SafeDamager.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Vector = ::java::util::Vector;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultHighlighter$SafeDamager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultHighlighter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultHighlighter$SafeDamager, this$0)},
	{"p0", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Position;>;", $PRIVATE, $field(DefaultHighlighter$SafeDamager, p0)},
	{"p1", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Position;>;", $PRIVATE, $field(DefaultHighlighter$SafeDamager, p1)},
	{"lastDoc", "Ljavax/swing/text/Document;", nullptr, $PRIVATE, $field(DefaultHighlighter$SafeDamager, lastDoc)},
	{}
};

$MethodInfo _DefaultHighlighter$SafeDamager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultHighlighter;)V", nullptr, 0, $method(static_cast<void(DefaultHighlighter$SafeDamager::*)($DefaultHighlighter*)>(&DefaultHighlighter$SafeDamager::init$))},
	{"damageRange", "(Ljavax/swing/text/Position;Ljavax/swing/text/Position;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _DefaultHighlighter$SafeDamager_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultHighlighter$SafeDamager", "javax.swing.text.DefaultHighlighter", "SafeDamager", 0},
	{}
};

$ClassInfo _DefaultHighlighter$SafeDamager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultHighlighter$SafeDamager",
	"java.lang.Object",
	"java.lang.Runnable",
	_DefaultHighlighter$SafeDamager_FieldInfo_,
	_DefaultHighlighter$SafeDamager_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultHighlighter$SafeDamager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultHighlighter"
};

$Object* allocate$DefaultHighlighter$SafeDamager($Class* clazz) {
	return $of($alloc(DefaultHighlighter$SafeDamager));
}

void DefaultHighlighter$SafeDamager::init$($DefaultHighlighter* this$0) {
	$set(this, this$0, this$0);
	$set(this, p0, $new($Vector, 10));
	$set(this, p1, $new($Vector, 10));
	$set(this, lastDoc, nullptr);
}

void DefaultHighlighter$SafeDamager::run() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->this$0->component != nullptr) {
			$var($TextUI, mapper, $cast($TextUI, $nc(this->this$0->component)->getUI()));
			if (mapper != nullptr && this->lastDoc == $nc(this->this$0->component)->getDocument()) {
				int32_t len = $nc(this->p0)->size();
				for (int32_t i = 0; i < len; ++i) {
					$var($JTextComponent, var$0, this->this$0->component);
					int32_t var$1 = $nc(($cast($Position, $($nc(this->p0)->get(i)))))->getOffset();
					mapper->damageRange(var$0, var$1, $nc(($cast($Position, $($nc(this->p1)->get(i)))))->getOffset());
				}
			}
		}
		$nc(this->p0)->clear();
		$nc(this->p1)->clear();
		$set(this, lastDoc, nullptr);
	}
}

void DefaultHighlighter$SafeDamager::damageRange($Position* pos0, $Position* pos1) {
	$synchronized(this) {
		if (this->this$0->component == nullptr) {
			$nc(this->p0)->clear();
			$set(this, lastDoc, nullptr);
			return;
		}
		bool addToQueue = $nc(this->p0)->isEmpty();
		$var($Document, curDoc, $nc(this->this$0->component)->getDocument());
		if (curDoc != this->lastDoc) {
			if (!$nc(this->p0)->isEmpty()) {
				$nc(this->p0)->clear();
				$nc(this->p1)->clear();
			}
			$set(this, lastDoc, curDoc);
		}
		$nc(this->p0)->add(pos0);
		$nc(this->p1)->add(pos1);
		if (addToQueue) {
			$SwingUtilities::invokeLater(this);
		}
	}
}

DefaultHighlighter$SafeDamager::DefaultHighlighter$SafeDamager() {
}

$Class* DefaultHighlighter$SafeDamager::load$($String* name, bool initialize) {
	$loadClass(DefaultHighlighter$SafeDamager, name, initialize, &_DefaultHighlighter$SafeDamager_ClassInfo_, allocate$DefaultHighlighter$SafeDamager);
	return class$;
}

$Class* DefaultHighlighter$SafeDamager::class$ = nullptr;

		} // text
	} // swing
} // javax