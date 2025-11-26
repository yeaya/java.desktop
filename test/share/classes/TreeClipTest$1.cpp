#include <TreeClipTest$1.h>

#include <TreeClipTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB
#undef WHITE

using $TreeClipTest = ::TreeClipTest;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ImageIO = ::javax::imageio::ImageIO;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

$MethodInfo _TreeClipTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TreeClipTest$1::*)()>(&TreeClipTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TreeClipTest$1_EnclosingMethodInfo_ = {
	"TreeClipTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TreeClipTest$1_InnerClassesInfo_[] = {
	{"TreeClipTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TreeClipTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"TreeClipTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TreeClipTest$1_MethodInfo_,
	nullptr,
	&_TreeClipTest$1_EnclosingMethodInfo_,
	_TreeClipTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TreeClipTest"
};

$Object* allocate$TreeClipTest$1($Class* clazz) {
	return $of($alloc(TreeClipTest$1));
}

void TreeClipTest$1::init$() {
}

void TreeClipTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "JTree"_s));
	$var($DefaultMutableTreeNode, parent, nullptr);
	$assign(parent, $new($DefaultMutableTreeNode, "colors"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "blue"_s));
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, root));
	$var($JTree, tree, $new($JTree, static_cast<$TreeModel*>(model)));
	$var($BufferedImage, img, $new($BufferedImage, 50, 50, $BufferedImage::TYPE_INT_ARGB));
	for (int32_t clipY = 1; clipY < 50; ++clipY) {
		$var($Graphics2D, ig, img->createGraphics());
		$init($Color);
		$nc(ig)->setColor($Color::WHITE);
		ig->fillRect(0, 0, 1000, 1000);
		tree->setSize(200, 200);
		ig->setClip(0, 0, 1000, clipY);
		tree->paint(ig);
		ig->dispose();
		if (!$TreeClipTest::checkImage(img, clipY)) {
			$nc($System::err)->println($$str({"Failed with clipY="_s, $$str(clipY)}));
			$init($TreeClipTest);
			$TreeClipTest::passed = false;
			try {
				$ImageIO::write(static_cast<$RenderedImage*>(img), "PNG"_s, $$new($File, "failedResult.png"_s));
			} catch ($IOException& e) {
				e->printStackTrace();
			}
			return;
		}
	}
}

TreeClipTest$1::TreeClipTest$1() {
}

$Class* TreeClipTest$1::load$($String* name, bool initialize) {
	$loadClass(TreeClipTest$1, name, initialize, &_TreeClipTest$1_ClassInfo_, allocate$TreeClipTest$1);
	return class$;
}

$Class* TreeClipTest$1::class$ = nullptr;