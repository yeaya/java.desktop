#include <bug8134721.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

#undef TYPE_INT_RGB

using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Segment = ::javax::swing::text::Segment;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;

class bug8134721$$Lambda$testNPE : public $Runnable {
	$class(bug8134721$$Lambda$testNPE, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8134721::testNPE();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8134721$$Lambda$testNPE>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8134721$$Lambda$testNPE::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8134721$$Lambda$testNPE::*)()>(&bug8134721$$Lambda$testNPE::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8134721$$Lambda$testNPE::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8134721$$Lambda$testNPE",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8134721$$Lambda$testNPE::load$($String* name, bool initialize) {
	$loadClass(bug8134721$$Lambda$testNPE, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8134721$$Lambda$testNPE::class$ = nullptr;

$MethodInfo _bug8134721_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8134721::*)()>(&bug8134721::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8134721::main)), "java.lang.Exception"},
	{"testNPE", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8134721::testNPE))},
	{}
};

$ClassInfo _bug8134721_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8134721",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8134721_MethodInfo_
};

$Object* allocate$bug8134721($Class* clazz) {
	return $of($alloc(bug8134721));
}

void bug8134721::init$() {
}

void bug8134721::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8134721$$Lambda$testNPE)));
}

void bug8134721::testNPE() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, test, "\ttest\ttest2"_s);
			$var($BufferedImage, buffImage, $new($BufferedImage, 100, 100, $BufferedImage::TYPE_INT_RGB));
			$assign(g, buffImage->createGraphics());
			$var($chars, var$1, test->toCharArray());
			$var($Segment, segment, $new($Segment, var$1, 0, test->length()));
			$Utilities::drawTabbedText(segment, 0, 0, g, ($TabExpander*)nullptr, 0);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (g != nullptr) {
				g->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug8134721::bug8134721() {
}

$Class* bug8134721::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8134721$$Lambda$testNPE::classInfo$.name)) {
			return bug8134721$$Lambda$testNPE::load$(name, initialize);
		}
	}
	$loadClass(bug8134721, name, initialize, &_bug8134721_ClassInfo_, allocate$bug8134721);
	return class$;
}

$Class* bug8134721::class$ = nullptr;