#include <sun/swing/SwingUtilities2$RepaintListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$MethodInfo _SwingUtilities2$RepaintListener_MethodInfo_[] = {
	{"repaintPerformed", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SwingUtilities2$RepaintListener_InnerClassesInfo_[] = {
	{"sun.swing.SwingUtilities2$RepaintListener", "sun.swing.SwingUtilities2", "RepaintListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SwingUtilities2$RepaintListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.SwingUtilities2$RepaintListener",
	nullptr,
	nullptr,
	nullptr,
	_SwingUtilities2$RepaintListener_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities2$RepaintListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingUtilities2"
};

$Object* allocate$SwingUtilities2$RepaintListener($Class* clazz) {
	return $of($alloc(SwingUtilities2$RepaintListener));
}

$Class* SwingUtilities2$RepaintListener::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$RepaintListener, name, initialize, &_SwingUtilities2$RepaintListener_ClassInfo_, allocate$SwingUtilities2$RepaintListener);
	return class$;
}

$Class* SwingUtilities2$RepaintListener::class$ = nullptr;

	} // swing
} // sun