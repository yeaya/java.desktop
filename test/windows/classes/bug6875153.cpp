#include <bug6875153.h>

#include <bug6875153$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6875153$1 = ::bug6875153$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6875153_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6875153::*)()>(&bug6875153::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6875153::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6875153::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6875153_InnerClassesInfo_[] = {
	{"bug6875153$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6875153_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6875153",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6875153_MethodInfo_,
	nullptr,
	nullptr,
	_bug6875153_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6875153$1"
};

$Object* allocate$bug6875153($Class* clazz) {
	return $of($alloc(bug6875153));
}

void bug6875153::init$() {
}

void bug6875153::createGui() {
	$var($JLayer, layer, $new($JLayer));
	layer->setGlassPane(nullptr);
	layer->isOptimizedDrawingEnabled();
}

void bug6875153::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6875153$1));
}

bug6875153::bug6875153() {
}

$Class* bug6875153::load$($String* name, bool initialize) {
	$loadClass(bug6875153, name, initialize, &_bug6875153_ClassInfo_, allocate$bug6875153);
	return class$;
}

$Class* bug6875153::class$ = nullptr;