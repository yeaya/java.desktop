#include <javax/swing/JComponent$ReadObjectCallback.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectInputValidation.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _JComponent$ReadObjectCallback_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$ReadObjectCallback, this$0)},
	{"roots", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/JComponent;>;", $PRIVATE | $FINAL, $field(JComponent$ReadObjectCallback, roots)},
	{"inputStream", "Ljava/io/ObjectInputStream;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ReadObjectCallback, inputStream)},
	{}
};

$MethodInfo _JComponent$ReadObjectCallback_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;Ljava/io/ObjectInputStream;)V", nullptr, 0, $method(static_cast<void(JComponent$ReadObjectCallback::*)($JComponent*,$ObjectInputStream*)>(&JComponent$ReadObjectCallback::init$)), "java.lang.Exception"},
	{"registerComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent$ReadObjectCallback::*)($JComponent*)>(&JComponent$ReadObjectCallback::registerComponent))},
	{"validateObject", "()V", nullptr, $PUBLIC, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _JComponent$ReadObjectCallback_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$ReadObjectCallback", "javax.swing.JComponent", "ReadObjectCallback", $PRIVATE},
	{}
};

$ClassInfo _JComponent$ReadObjectCallback_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComponent$ReadObjectCallback",
	"java.lang.Object",
	"java.io.ObjectInputValidation",
	_JComponent$ReadObjectCallback_FieldInfo_,
	_JComponent$ReadObjectCallback_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$ReadObjectCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$ReadObjectCallback($Class* clazz) {
	return $of($alloc(JComponent$ReadObjectCallback));
}

void JComponent$ReadObjectCallback::init$($JComponent* this$0, $ObjectInputStream* s) {
	$set(this, this$0, this$0);
	$set(this, roots, $new($Vector, 1));
	$set(this, inputStream, s);
	$nc(s)->registerValidation(this, 0);
}

void JComponent$ReadObjectCallback::validateObject() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Iterator, i$, $nc(this->roots)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JComponent, root, $cast($JComponent, i$->next()));
					{
						$SwingUtilities::updateComponentTreeUI(root);
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init($JComponent);
			$nc($JComponent::readObjectCallbacks)->remove(this->inputStream);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JComponent$ReadObjectCallback::registerComponent($JComponent* c) {
	{
		$var($Iterator, i$, $nc(this->roots)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JComponent, root, $cast($JComponent, i$->next()));
			{
				{
					$var($Component, p, c);
					for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
						if ($equals(p, root)) {
							return;
						}
					}
				}
			}
		}
	}
	for (int32_t i = 0; i < $nc(this->roots)->size(); ++i) {
		$var($JComponent, root, $cast($JComponent, $nc(this->roots)->elementAt(i)));
		{
			$var($Component, p, $nc(root)->getParent());
			for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
				if ($equals(p, c)) {
					$nc(this->roots)->removeElementAt(i--);
					break;
				}
			}
		}
	}
	$nc(this->roots)->addElement(c);
}

JComponent$ReadObjectCallback::JComponent$ReadObjectCallback() {
}

$Class* JComponent$ReadObjectCallback::load$($String* name, bool initialize) {
	$loadClass(JComponent$ReadObjectCallback, name, initialize, &_JComponent$ReadObjectCallback_ClassInfo_, allocate$JComponent$ReadObjectCallback);
	return class$;
}

$Class* JComponent$ReadObjectCallback::class$ = nullptr;

	} // swing
} // javax