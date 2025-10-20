#include <BackgroundImagePosition.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef GREEN
#undef SIZE
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ImageIO = ::javax::imageio::ImageIO;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $EditorKit = ::javax::swing::text::EditorKit;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class BackgroundImagePosition$$Lambda$lambda$test$0 : public $Runnable {
	$class(BackgroundImagePosition$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* x, $String* y, $BufferedImage* bi) {
		$set(this, x, x);
		$set(this, y, y);
		$set(this, bi, bi);
	}
	virtual void run() override {
		BackgroundImagePosition::lambda$test$0(x, y, bi);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BackgroundImagePosition$$Lambda$lambda$test$0>());
	}
	$String* x = nullptr;
	$String* y = nullptr;
	$BufferedImage* bi = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BackgroundImagePosition$$Lambda$lambda$test$0::fieldInfos[4] = {
	{"x", "Ljava/lang/String;", nullptr, $PUBLIC, $field(BackgroundImagePosition$$Lambda$lambda$test$0, x)},
	{"y", "Ljava/lang/String;", nullptr, $PUBLIC, $field(BackgroundImagePosition$$Lambda$lambda$test$0, y)},
	{"bi", "Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $field(BackgroundImagePosition$$Lambda$lambda$test$0, bi)},
	{}
};
$MethodInfo BackgroundImagePosition$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC, $method(static_cast<void(BackgroundImagePosition$$Lambda$lambda$test$0::*)($String*,$String*,$BufferedImage*)>(&BackgroundImagePosition$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BackgroundImagePosition$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"BackgroundImagePosition$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* BackgroundImagePosition$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(BackgroundImagePosition$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BackgroundImagePosition$$Lambda$lambda$test$0::class$ = nullptr;

$FieldInfo _BackgroundImagePosition_FieldInfo_[] = {
	{"pos", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(BackgroundImagePosition, pos)},
	{"SIZE", "I", nullptr, $STATIC | $FINAL, $constField(BackgroundImagePosition, SIZE)},
	{}
};

$MethodInfo _BackgroundImagePosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BackgroundImagePosition::*)()>(&BackgroundImagePosition::init$))},
	{"compareImages", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)V", nullptr, $STATIC, $method(static_cast<void(*)($BufferedImage*,$BufferedImage*)>(&BackgroundImagePosition::compareImages)), "java.io.IOException"},
	{"lambda$test$0", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/image/BufferedImage;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$BufferedImage*)>(&BackgroundImagePosition::lambda$test$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BackgroundImagePosition::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $method(static_cast<$BufferedImage*(*)($String*,$String*)>(&BackgroundImagePosition::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _BackgroundImagePosition_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"BackgroundImagePosition",
	"java.lang.Object",
	nullptr,
	_BackgroundImagePosition_FieldInfo_,
	_BackgroundImagePosition_MethodInfo_
};

$Object* allocate$BackgroundImagePosition($Class* clazz) {
	return $of($alloc(BackgroundImagePosition));
}

$List* BackgroundImagePosition::pos = nullptr;

void BackgroundImagePosition::init$() {
}

void BackgroundImagePosition::main($StringArray* args) {
	$init(BackgroundImagePosition);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, $new($BufferedImage, 50, 50, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics2D, g, bi->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::GREEN);
	g->fillRect(0, 0, 50, 50);
	g->dispose();
	$var($File, file, $new($File, "file.png"_s));
	$ImageIO::write(static_cast<$RenderedImage*>(bi), "png"_s, file);
	{
		$var($Iterator, i$, $nc(BackgroundImagePosition::pos)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, x, $cast($String, i$->next()));
			{
				$var($BufferedImage, img1, test(x, x));
				{
					$var($Iterator, i$, $nc(BackgroundImagePosition::pos)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, y, $cast($String, i$->next()));
						{
							if (!$nc(x)->equals(y)) {
								compareImages(img1, $(test(x, y)));
								compareImages(img1, $(test(y, x)));
							}
						}
					}
				}
			}
		}
	}
}

void BackgroundImagePosition::compareImages($BufferedImage* img1, $BufferedImage* img2) {
	$init(BackgroundImagePosition);
	$useLocalCurrentObjectStackCache();
	for (int32_t imgX = 0; imgX < BackgroundImagePosition::SIZE; ++imgX) {
		for (int32_t imgY = 0; imgY < BackgroundImagePosition::SIZE; ++imgY) {
			int32_t var$0 = $nc(img1)->getRGB(imgX, imgY);
			if (var$0 != $nc(img2)->getRGB(imgX, imgY)) {
				return;
			}
		}
	}
	$ImageIO::write(static_cast<$RenderedImage*>(img1), "png"_s, $$new($File, "img1.png"_s));
	$ImageIO::write(static_cast<$RenderedImage*>(img2), "png"_s, $$new($File, "img2.png"_s));
	$throwNew($RuntimeException, "Same images for different size"_s);
}

$BufferedImage* BackgroundImagePosition::test($String* x, $String* y) {
	$init(BackgroundImagePosition);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, $new($BufferedImage, BackgroundImagePosition::SIZE, BackgroundImagePosition::SIZE, $BufferedImage::TYPE_INT_ARGB));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(BackgroundImagePosition$$Lambda$lambda$test$0, x, y, bi)));
	return bi;
}

void BackgroundImagePosition::lambda$test$0($String* x, $String* y, $BufferedImage* bi) {
	$init(BackgroundImagePosition);
	$useLocalCurrentObjectStackCache();
	try {
		$var($JEditorPane, jep, $new($JEditorPane));
		$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
		jep->setEditorKit(kit);
		jep->setText($$str({"<style>body {background-image: url(file:./file.png);background-repeat: no-repeat;background-position: "_s, x, " "_s, y, ";background-color: #FF0000;}</style><body></body>"_s}));
		jep->setSize(BackgroundImagePosition::SIZE, BackgroundImagePosition::SIZE);
		$var($Graphics2D, graphics, $nc(bi)->createGraphics());
		jep->paint(graphics);
		$nc(graphics)->dispose();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void clinit$BackgroundImagePosition($Class* class$) {
	$assignStatic(BackgroundImagePosition::pos, $List::of($$new($StringArray, {
		""_s,
		"-2"_s,
		"-1"_s,
		"1px"_s,
		"2px"_s,
		"3px"_s,
		"1em"_s,
		"2em"_s,
		"3em"_s,
		"10%"_s,
		"55%"_s,
		"-1em"_s,
		"-2em"_s,
		"-3em"_s,
		"-10%"_s
	})));
}

BackgroundImagePosition::BackgroundImagePosition() {
}

$Class* BackgroundImagePosition::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BackgroundImagePosition$$Lambda$lambda$test$0::classInfo$.name)) {
			return BackgroundImagePosition$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(BackgroundImagePosition, name, initialize, &_BackgroundImagePosition_ClassInfo_, clinit$BackgroundImagePosition, allocate$BackgroundImagePosition);
	return class$;
}

$Class* BackgroundImagePosition::class$ = nullptr;