-- MySQL dump 10.13  Distrib 8.0.23, for Win64 (x86_64)
--
-- Host: localhost    Database: fununion
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `paperwork`
--

DROP TABLE IF EXISTS `paperwork`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `paperwork` (
  `id` int NOT NULL AUTO_INCREMENT,
  `author_id` int DEFAULT NULL,
  `author` varchar(100) DEFAULT NULL,
  `author_portrait` varchar(100) DEFAULT NULL,
  `cover_img` varchar(100) DEFAULT NULL,
  `title` varchar(100) DEFAULT NULL,
  `like_num` int DEFAULT NULL,
  `type` int DEFAULT NULL,
  `publish_date` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=47 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `paperwork`
--

LOCK TABLES `paperwork` WRITE;
/*!40000 ALTER TABLE `paperwork` DISABLE KEYS */;
INSERT INTO `paperwork` VALUES (1,1001,'干饭人','user1.jpg','home_cooking_00011_3902644339.png','家常菜的做法',100,1,'2024-2-27'),(2,1002,'干饭魂','user2.jpg','home_cooking_00012_3902644339.png','湘菜合集来啦',200,1,'2024-2-27'),(3,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(4,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(5,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(6,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(7,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(8,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(9,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(10,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(11,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(12,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(13,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(14,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(15,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(16,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(17,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(18,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(19,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(20,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(21,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(22,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(23,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(24,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(25,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(26,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(27,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(28,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(29,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(30,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(31,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(32,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(33,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(34,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(35,1003,'干饭第一名','user3.jpg','home_cooking_00013_3902644340.png','湘菜天花板之一',300,1,'2024-2-25'),(36,1001,'干饭人','user1.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(37,1001,'干饭魂','user2.jpg','juice_00007_3902644339.png','果汁居然也有段位，不要喝错啦',500,2,'2024-2-28'),(38,1001,'干饭人','user4.jpg','juice_00008_3902644340.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(39,1001,'干饭人','user4.jpg','juice_00009_3902644341.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(40,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(41,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(42,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(43,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(44,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(45,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28'),(46,1001,'干饭人','user4.jpg','juice_00006_3902644339.png','果汁居然也有段位，不要喝错啦',400,2,'2024-2-28');
/*!40000 ALTER TABLE `paperwork` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `author`
--

DROP TABLE IF EXISTS `author`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `author` (
  `id` varchar(100) DEFAULT NULL COMMENT '主键',
  `author` varchar(100) DEFAULT NULL COMMENT '作者姓名',
  `author_portrait` varchar(100) DEFAULT NULL COMMENT '作者头像'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `author`
--

LOCK TABLES `author` WRITE;
/*!40000 ALTER TABLE `author` DISABLE KEYS */;
INSERT INTO `author` VALUES ('1002','干饭魂','user2.jpg'),('1002','干饭魂','user2.jpg'),('1002','干饭魂','user2.jpg'),('1002','干饭魂','user2.jpg');
/*!40000 ALTER TABLE `author` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `paperworks_details`
--

DROP TABLE IF EXISTS `paperworks_details`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `paperworks_details` (
  `id` int NOT NULL AUTO_INCREMENT COMMENT '主键',
  `paperworks_id` int DEFAULT NULL,
  `images` varchar(255) DEFAULT NULL COMMENT '图片集合',
  `videos` varchar(255) DEFAULT NULL COMMENT '视频集合',
  `title` varchar(100) DEFAULT NULL COMMENT '标题',
  `author` varchar(100) DEFAULT NULL COMMENT '文案作者',
  `author_portrait` varchar(100) DEFAULT NULL COMMENT '文案作者头像',
  `content` text CHARACTER SET utf8 COLLATE utf8_general_ci COMMENT '文案内容',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `paperworks_details`
--

LOCK TABLES `paperworks_details` WRITE;
/*!40000 ALTER TABLE `paperworks_details` DISABLE KEYS */;
INSERT INTO `paperworks_details` VALUES (1,1,'juice_00006_3902644339.png|juice_00007_3902644339.png|juice_00008_3902644340.png|juice_00009_3902644341.png|juice_00010_3902644342.png',NULL,'家常菜的做法','干饭人','user_3902644344.png','当谈及家常菜，有许多美味且简便的做法。以下是一道简单又经典的家常菜——红烧肉的做法。希望您喜欢！<br>红烧肉<br>食材：<br>500克猪五花肉，切块<br>2片姜，切片<br>3颗大蒜，切末<br>2根香葱，切段<br>50克冰糖<br>50ml生抽<br>30ml老抽<br>30ml料酒<br>500ml清水<br>1块八角<br>2片桂皮<br>盐和胡椒适量<br>绿色蔬菜（如青菜、小白菜等），作为配菜<br>做法：<br>准备工作：&nbsp;烧开一锅水，将切好的五花肉放入滚水中焯水，捞出备用。<br>炒香调料：&nbsp;热锅凉油，加入姜片和蒜末，炒出香味后加入冰糖炒化。<br>烧制红烧汁：&nbsp;冰糖炒化后，加入生抽、老抽、料酒，翻炒均匀。接着加入清水，放入八角和桂皮，煮开。<br>红烧肉焯水：&nbsp;将焯水过的五花肉放入煮开的调料汁中，调至中小火，焖煮30分钟至汤汁浓稠。<br>调味：&nbsp;根据个人口味，适量加盐和胡椒调味，再加入香葱段。<br>出锅：&nbsp;肉烧烂后，肥瘦相间，颜色红亮，即可出锅。<br>搭配蔬菜：&nbsp;在上菜前，可在汤汁中加入绿色蔬菜，焯熟后提升菜品色彩和口感。<br>红烧肉香气四溢，肉质酥烂，汤汁浓郁，非常适合搭配米饭食用。希望您喜欢这道家常美食！');
/*!40000 ALTER TABLE `paperworks_details` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user` (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci DEFAULT NULL,
  `password` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL DEFAULT '123456' COMMENT '密码',
  `age` int DEFAULT NULL,
  `gender` int DEFAULT NULL,
  `personal_profile` varchar(255) DEFAULT NULL,
  `city` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=19 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'admin','123456',34,1,NULL,NULL),(2,'张三','123456',13,1,NULL,NULL),(3,'张三1','123456',12,1,NULL,NULL),(4,'王五','123456',14,0,NULL,NULL),(5,'赵六','123456',15,0,NULL,NULL),(6,'张三','123456',20,0,NULL,NULL),(7,'李四','123456',21,1,NULL,NULL),(8,'张三2','123456',20,1,NULL,NULL),(11,'Jack','123456',22,1,NULL,NULL),(12,'Snkey','123456',32,1,NULL,NULL),(13,'Rose','123456',33,0,NULL,NULL),(14,'zhangsan','123456',33,1,NULL,NULL),(15,'admin11','123456',0,0,NULL,NULL),(16,'admin12','123456',0,0,NULL,NULL),(17,'admin13','123456',20,0,NULL,NULL),(18,'admin1','123456',0,0,NULL,NULL);
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-03-28 17:35:35
