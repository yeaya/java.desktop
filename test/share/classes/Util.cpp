#include <Util.h>

#include <Util$1.h>
#include <Util$2.h>
#include <Util$3.h>
#include <Util$4.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Box.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef ALT_MASK
#undef APPLICATION_MODAL
#undef CTRL_MASK
#undef DISPOSE_ON_CLOSE
#undef META_MASK
#undef SHIFT_MASK
#undef SOUTH
#undef VK_ALT
#undef VK_CONTROL
#undef VK_META
#undef VK_SHIFT

using $Util$1 = ::Util$1;
using $Util$2 = ::Util$2;
using $Util$3 = ::Util$3;
using $Util$4 = ::Util$4;
using $ComponentArray = $Array<::java::awt::Component>;
using $ExceptionArray = $Array<::java::lang::Exception>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog$ModalityType = ::java::awt::Dialog$ModalityType;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Box = ::javax::swing::Box;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Util::*)()>(&Util::init$))},
	{"compareBufferedImages", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&Util::compareBufferedImages))},
	{"convertRectToScreen", "(Ljava/awt/Rectangle;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Rectangle*,$Component*)>(&Util::convertRectToScreen))},
	{"createModalDialogWithPassFailButtons", "(Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JDialog*(*)($String*)>(&Util::createModalDialogWithPassFailButtons))},
	{"findSubComponent", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Component*,$String*)>(&Util::findSubComponent))},
	{"generateOOME", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Util::generateOOME))},
	{"getCenterPoint", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)($Component*)>(&Util::getCenterPoint)), "java.lang.Exception"},
	{"getKeyCodesFromKeyMask", "(I)Ljava/util/ArrayList;", "(I)Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $method(static_cast<$ArrayList*(*)(int32_t)>(&Util::getKeyCodesFromKeyMask))},
	{"getSystemMnemonicKeyCodes", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $method(static_cast<$ArrayList*(*)()>(&Util::getSystemMnemonicKeyCodes))},
	{"glide", "(Ljava/awt/Robot;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Robot*,int32_t,int32_t,int32_t,int32_t)>(&Util::glide)), "java.awt.AWTException"},
	{"hitKeys", "(Ljava/awt/Robot;[I)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($Robot*,$ints*)>(&Util::hitKeys))},
	{"hitMnemonics", "(Ljava/awt/Robot;[I)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($Robot*,$ints*)>(&Util::hitMnemonics))},
	{"invokeOnEDT", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Callable*)>(&Util::invokeOnEDT)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Util_InnerClassesInfo_[] = {
	{"Util$4", nullptr, nullptr, 0},
	{"Util$3", nullptr, nullptr, 0},
	{"Util$2", nullptr, nullptr, 0},
	{"Util$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Util_MethodInfo_,
	nullptr,
	nullptr,
	_Util_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Util$4,Util$3,Util$2,Util$1"
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

void Util::init$() {
}

void Util::convertRectToScreen($Rectangle* r, $Component* c) {
	$var($Point, p, $new($Point, $nc(r)->x, r->y));
	$SwingUtilities::convertPointToScreen(p, c);
	$nc(r)->x = p->x;
	r->y = p->y;
}

bool Util::compareBufferedImages($BufferedImage* bufferedImage0, $BufferedImage* bufferedImage1) {
	int32_t width = $nc(bufferedImage0)->getWidth();
	int32_t height = bufferedImage0->getHeight();
	bool var$0 = width != $nc(bufferedImage1)->getWidth();
	if (var$0 || height != $nc(bufferedImage1)->getHeight()) {
		return false;
	}
	for (int32_t y = 0; y < height; ++y) {
		for (int32_t x = 0; x < width; ++x) {
			int32_t var$1 = bufferedImage0->getRGB(x, y);
			if (var$1 != $nc(bufferedImage1)->getRGB(x, y)) {
				return false;
			}
		}
	}
	return true;
}

void Util::generateOOME() {
	$useLocalCurrentObjectStackCache();
	$var($List, bigLeak, $new($LinkedList));
	bool oome = false;
	$nc($System::out)->print("Filling the heap"_s);
	try {
		for (int32_t i = 0; true; ++i) {
			bigLeak->add($$new($bytes, 1024 * 1024));
			$nc($System::out)->print("."_s);
			if (i % 10 == 0) {
				$System::gc();
				try {
					$Thread::sleep(100);
				} catch ($InterruptedException& e) {
					e->printStackTrace();
				}
			}
		}
	} catch ($OutOfMemoryError& e) {
		$assign(bigLeak, nullptr);
		oome = true;
	}
	$nc($System::out)->println(""_s);
	if (!oome) {
		$throwNew($RuntimeException, "Problem with test case - never got OOME"_s);
	}
	$nc($System::out)->println("Got OOME"_s);
}

$Component* Util::findSubComponent($Component* parent, $String* className) {
	$useLocalCurrentObjectStackCache();
	$var($String, parentClassName, $nc($of(parent))->getClass()->getName());
	if ($nc(parentClassName)->contains(className)) {
		return parent;
	}
	if ($instanceOf($Container, parent)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, parent)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					$var($Component, subComponent, findSubComponent(child, className));
					if (subComponent != nullptr) {
						return subComponent;
					}
				}
			}
		}
	}
	return nullptr;
}

void Util::hitMnemonics($Robot* robot, $ints* keys) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, mnemonicKeyCodes, getSystemMnemonicKeyCodes());
	{
		$var($Iterator, i$, $nc(mnemonicKeyCodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, mnemonic, $cast($Integer, i$->next()));
			{
				$nc(robot)->keyPress($nc(mnemonic)->intValue());
			}
		}
	}
	hitKeys(robot, keys);
	{
		$var($Iterator, i$, mnemonicKeyCodes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Integer, mnemonic, $cast($Integer, i$->next()));
			{
				$nc(robot)->keyRelease($nc(mnemonic)->intValue());
			}
		}
	}
}

void Util::hitKeys($Robot* robot, $ints* keys) {
	for (int32_t i = 0; i < $nc(keys)->length; ++i) {
		$nc(robot)->keyPress(keys->get(i));
	}
	for (int32_t i = $nc(keys)->length - 1; i >= 0; --i) {
		$nc(robot)->keyRelease(keys->get(i));
	}
}

void Util::glide($Robot* robot, int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
	int32_t var$0 = $Math::abs(x1 - x0);
	float dmax = (float)$Math::max(var$0, $Math::abs(y1 - y0));
	float dx = (x1 - x0) / dmax;
	float dy = (y1 - y0) / dmax;
	for (int32_t i = 0; i <= dmax; i += 10) {
		$nc(robot)->mouseMove($cast(int32_t, (x0 + dx * i)), $cast(int32_t, (y0 + dy * i)));
	}
}

$Point* Util::getCenterPoint($Component* component) {
	return $cast($Point, Util::invokeOnEDT($$new($Util$1, component)));
}

$Object* Util::invokeOnEDT($Callable* task) {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList, 1));
	$var($ExceptionArray, exception, $new($ExceptionArray, 1));
	$SwingUtilities::invokeAndWait($$new($Util$2, result, task, exception));
	if (exception->get(0) != nullptr) {
		$throw(exception->get(0));
	}
	return $of(result->get(0));
}

$ArrayList* Util::getKeyCodesFromKeyMask(int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, result, $new($ArrayList));
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::CTRL_MASK)) != 0) {
		result->add($($Integer::valueOf($KeyEvent::VK_CONTROL)));
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_MASK)) != 0) {
		result->add($($Integer::valueOf($KeyEvent::VK_ALT)));
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::SHIFT_MASK)) != 0) {
		result->add($($Integer::valueOf($KeyEvent::VK_SHIFT)));
	}
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::META_MASK)) != 0) {
		result->add($($Integer::valueOf($KeyEvent::VK_META)));
	}
	return result;
}

$ArrayList* Util::getSystemMnemonicKeyCodes() {
	$useLocalCurrentObjectStackCache();
	$var($String, osName, $System::getProperty("os.name"_s));
	$var($ArrayList, result, $new($ArrayList));
	if ($nc(osName)->contains("OS X"_s)) {
		result->add($($Integer::valueOf($KeyEvent::VK_CONTROL)));
	}
	result->add($($Integer::valueOf($KeyEvent::VK_ALT)));
	return result;
}

$JDialog* Util::createModalDialogWithPassFailButtons($String* failString) {
	$useLocalCurrentObjectStackCache();
	$var($JDialog, retDialog, $new($JDialog));
	$var($Box, buttonBox, $Box::createHorizontalBox());
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	passButton->addActionListener($$new($Util$3, retDialog));
	failButton->addActionListener($$new($Util$4, retDialog, failString));
	retDialog->setTitle("Test"_s);
	$init($Dialog$ModalityType);
	retDialog->setModalityType($Dialog$ModalityType::APPLICATION_MODAL);
	$nc(buttonBox)->add(static_cast<$Component*>(passButton));
	buttonBox->add($($Box::createGlue()));
	buttonBox->add(static_cast<$Component*>(failButton));
	$init($BorderLayout);
	$nc($(retDialog->getContentPane()))->add(static_cast<$Component*>(buttonBox), $of($BorderLayout::SOUTH));
	retDialog->setDefaultCloseOperation($JDialog::DISPOSE_ON_CLOSE);
	return retDialog;
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;