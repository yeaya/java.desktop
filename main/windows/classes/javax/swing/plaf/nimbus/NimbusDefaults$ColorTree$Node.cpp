#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node.h>

#include <java/awt/Color.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;
using $NimbusDefaults$ColorTree = ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$ColorTree$Node_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$ColorTree$Node, this$1)},
	{"color", "Ljava/awt/Color;", nullptr, 0, $field(NimbusDefaults$ColorTree$Node, color)},
	{"parent", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;", nullptr, 0, $field(NimbusDefaults$ColorTree$Node, parent)},
	{"children", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;>;", 0, $field(NimbusDefaults$ColorTree$Node, children)},
	{}
};

$MethodInfo _NimbusDefaults$ColorTree$Node_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree;Ljava/awt/Color;Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;)V", nullptr, 0, $method(static_cast<void(NimbusDefaults$ColorTree$Node::*)($NimbusDefaults$ColorTree*,$Color*,NimbusDefaults$ColorTree$Node*)>(&NimbusDefaults$ColorTree$Node::init$))},
	{"set", "(Ljava/awt/Color;Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;)V", nullptr, $PUBLIC},
	{"update", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$ColorTree$Node_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "javax.swing.plaf.nimbus.NimbusDefaults", "ColorTree", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node", "javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "Node", 0},
	{}
};

$ClassInfo _NimbusDefaults$ColorTree$Node_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node",
	"java.lang.Object",
	nullptr,
	_NimbusDefaults$ColorTree$Node_FieldInfo_,
	_NimbusDefaults$ColorTree$Node_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$ColorTree$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$ColorTree$Node($Class* clazz) {
	return $of($alloc(NimbusDefaults$ColorTree$Node));
}

void NimbusDefaults$ColorTree$Node::init$($NimbusDefaults$ColorTree* this$1, $Color* color, NimbusDefaults$ColorTree$Node* parent) {
	$set(this, this$1, this$1);
	$set(this, children, $new($LinkedList));
	set(color, parent);
}

void NimbusDefaults$ColorTree$Node::set($Color* color, NimbusDefaults$ColorTree$Node* parent) {
	$set(this, color, color);
	$set(this, parent, parent);
}

void NimbusDefaults$ColorTree$Node::update() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DerivedColor, this->color)) {
		$nc(($cast($DerivedColor, this->color)))->rederiveColor();
	}
	{
		$var($Iterator, i$, $nc(this->children)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(NimbusDefaults$ColorTree$Node, child, $cast(NimbusDefaults$ColorTree$Node, i$->next()));
			{
				$nc(child)->update();
			}
		}
	}
}

NimbusDefaults$ColorTree$Node::NimbusDefaults$ColorTree$Node() {
}

$Class* NimbusDefaults$ColorTree$Node::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$ColorTree$Node, name, initialize, &_NimbusDefaults$ColorTree$Node_ClassInfo_, allocate$NimbusDefaults$ColorTree$Node);
	return class$;
}

$Class* NimbusDefaults$ColorTree$Node::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax