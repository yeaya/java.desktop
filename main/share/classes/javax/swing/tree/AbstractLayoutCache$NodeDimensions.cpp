#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>

#include <java/awt/Rectangle.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _AbstractLayoutCache$NodeDimensions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractLayoutCache$NodeDimensions::*)()>(&AbstractLayoutCache$NodeDimensions::init$))},
	{"getNodeDimensions", "(Ljava/lang/Object;IIZLjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AbstractLayoutCache$NodeDimensions_InnerClassesInfo_[] = {
	{"javax.swing.tree.AbstractLayoutCache$NodeDimensions", "javax.swing.tree.AbstractLayoutCache", "NodeDimensions", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractLayoutCache$NodeDimensions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.tree.AbstractLayoutCache$NodeDimensions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AbstractLayoutCache$NodeDimensions_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractLayoutCache$NodeDimensions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.AbstractLayoutCache"
};

$Object* allocate$AbstractLayoutCache$NodeDimensions($Class* clazz) {
	return $of($alloc(AbstractLayoutCache$NodeDimensions));
}

void AbstractLayoutCache$NodeDimensions::init$() {
}

AbstractLayoutCache$NodeDimensions::AbstractLayoutCache$NodeDimensions() {
}

$Class* AbstractLayoutCache$NodeDimensions::load$($String* name, bool initialize) {
	$loadClass(AbstractLayoutCache$NodeDimensions, name, initialize, &_AbstractLayoutCache$NodeDimensions_ClassInfo_, allocate$AbstractLayoutCache$NodeDimensions);
	return class$;
}

$Class* AbstractLayoutCache$NodeDimensions::class$ = nullptr;

		} // tree
	} // swing
} // javax