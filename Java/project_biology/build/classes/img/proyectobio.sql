-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 15-12-2022 a las 02:02:13
-- Versión del servidor: 10.4.25-MariaDB
-- Versión de PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `proyectobio`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `colector`
--

CREATE TABLE `colector` (
  `ColectorID` int(11) NOT NULL,
  `GrupoID` int(11) NOT NULL,
  `Citacion` varchar(30) NOT NULL,
  `Identificador` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `colector`
--

INSERT INTO `colector` (`ColectorID`, `GrupoID`, `Citacion`, `Identificador`) VALUES
(1, 4, 'NA', 'NA'),
(2, 3, 'Padilla-Fino LN', 'NPF');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `especimen`
--

CREATE TABLE `especimen` (
  `id` int(11) NOT NULL,
  `colectorid` int(11) NOT NULL,
  `fechacolec` date NOT NULL,
  `orden` varchar(20) NOT NULL,
  `familia` varchar(20) NOT NULL,
  `genero` varchar(20) NOT NULL,
  `especie` varchar(20) NOT NULL,
  `pelaje` int(11) NOT NULL,
  `extremidades` int(11) NOT NULL,
  `frutos` int(11) NOT NULL,
  `hojas` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `especimenestudio`
--

CREATE TABLE `especimenestudio` (
  `EstudioID` int(11) NOT NULL,
  `Nombre` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `especimenestudio`
--

INSERT INTO `especimenestudio` (`EstudioID`, `Nombre`) VALUES
(1, 'Plantas'),
(2, 'Animales'),
(3, 'Animales, Plantas'),
(4, 'NA');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `frutos`
--

CREATE TABLE `frutos` (
  `FrutoID` int(11) NOT NULL,
  `Fruto` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `frutos`
--

INSERT INTO `frutos` (`FrutoID`, `Fruto`) VALUES
(1, 'Monocarpelar'),
(2, 'Policarpelar');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `genero`
--

CREATE TABLE `genero` (
  `GeneroID` int(11) NOT NULL,
  `Nombre` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `genero`
--

INSERT INTO `genero` (`GeneroID`, `Nombre`) VALUES
(1, 'Hombre'),
(2, 'Mujer');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `hojas`
--

CREATE TABLE `hojas` (
  `HojaID` int(11) NOT NULL,
  `Hoja` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `hojas`
--

INSERT INTO `hojas` (`HojaID`, `Hoja`) VALUES
(1, 'Compuesta'),
(2, 'Simple');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `pelaje`
--

CREATE TABLE `pelaje` (
  `PelajeID` int(11) NOT NULL,
  `Pelaje` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `pelaje`
--

INSERT INTO `pelaje` (`PelajeID`, `Pelaje`) VALUES
(1, 'Plumas'),
(2, 'Pelos'),
(3, 'Escamas'),
(4, 'Liso');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `persona`
--

CREATE TABLE `persona` (
  `UserID` int(11) NOT NULL,
  `pNombre` varchar(20) NOT NULL,
  `pApellido` varchar(20) NOT NULL,
  `sApellido` varchar(20) DEFAULT NULL,
  `GeneroID` int(11) NOT NULL,
  `fNac` date NOT NULL,
  `UserType` int(11) NOT NULL,
  `Universidad` int(11) DEFAULT NULL,
  `Colector` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `persona`
--

INSERT INTO `persona` (`UserID`, `pNombre`, `pApellido`, `sApellido`, `GeneroID`, `fNac`, `UserType`, `Universidad`, `Colector`) VALUES
(1014123456, 'Pedro', 'Gonzales', '', 1, '2022-07-09', 3, 2, 1),
(1014268221, 'Natalia', 'Padilla', 'Fino', 2, '1996-06-25', 2, 3, 2),
(1014279951, 'David', 'Padilla', 'Fino', 1, '2022-12-14', 1, 1, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `tipousuario`
--

CREATE TABLE `tipousuario` (
  `UserTypeID` int(11) NOT NULL,
  `Nombre` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `tipousuario`
--

INSERT INTO `tipousuario` (`UserTypeID`, `Nombre`) VALUES
(1, 'Administrador'),
(2, 'Investigador'),
(3, 'Visitante');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `universidades`
--

CREATE TABLE `universidades` (
  `UniversidadID` int(11) NOT NULL,
  `Nombre` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `universidades`
--

INSERT INTO `universidades` (`UniversidadID`, `Nombre`) VALUES
(1, 'Universidad Distrital Francisco Jose de Caldas'),
(2, 'Universidad Nacional de Colombia'),
(3, 'Jardin Botanico'),
(4, 'Instituto Humbolt');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `colector`
--
ALTER TABLE `colector`
  ADD PRIMARY KEY (`ColectorID`),
  ADD KEY `GrupoID` (`GrupoID`);

--
-- Indices de la tabla `especimen`
--
ALTER TABLE `especimen`
  ADD PRIMARY KEY (`id`),
  ADD KEY `colector` (`colectorid`),
  ADD KEY `frutos` (`frutos`),
  ADD KEY `pelaje` (`pelaje`),
  ADD KEY `hojas` (`hojas`);

--
-- Indices de la tabla `especimenestudio`
--
ALTER TABLE `especimenestudio`
  ADD PRIMARY KEY (`EstudioID`);

--
-- Indices de la tabla `frutos`
--
ALTER TABLE `frutos`
  ADD PRIMARY KEY (`FrutoID`);

--
-- Indices de la tabla `genero`
--
ALTER TABLE `genero`
  ADD PRIMARY KEY (`GeneroID`);

--
-- Indices de la tabla `hojas`
--
ALTER TABLE `hojas`
  ADD PRIMARY KEY (`HojaID`);

--
-- Indices de la tabla `pelaje`
--
ALTER TABLE `pelaje`
  ADD PRIMARY KEY (`PelajeID`);

--
-- Indices de la tabla `persona`
--
ALTER TABLE `persona`
  ADD PRIMARY KEY (`UserID`),
  ADD KEY `GeneroID` (`GeneroID`),
  ADD KEY `Universidad` (`Universidad`),
  ADD KEY `UserType` (`UserType`),
  ADD KEY `Colector` (`Colector`);

--
-- Indices de la tabla `tipousuario`
--
ALTER TABLE `tipousuario`
  ADD PRIMARY KEY (`UserTypeID`);

--
-- Indices de la tabla `universidades`
--
ALTER TABLE `universidades`
  ADD PRIMARY KEY (`UniversidadID`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `colector`
--
ALTER TABLE `colector`
  MODIFY `ColectorID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT de la tabla `especimenestudio`
--
ALTER TABLE `especimenestudio`
  MODIFY `EstudioID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT de la tabla `genero`
--
ALTER TABLE `genero`
  MODIFY `GeneroID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT de la tabla `persona`
--
ALTER TABLE `persona`
  MODIFY `UserID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1014876124;

--
-- AUTO_INCREMENT de la tabla `tipousuario`
--
ALTER TABLE `tipousuario`
  MODIFY `UserTypeID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT de la tabla `universidades`
--
ALTER TABLE `universidades`
  MODIFY `UniversidadID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `colector`
--
ALTER TABLE `colector`
  ADD CONSTRAINT `colector_ibfk_1` FOREIGN KEY (`GrupoID`) REFERENCES `especimenestudio` (`EstudioID`);

--
-- Filtros para la tabla `especimen`
--
ALTER TABLE `especimen`
  ADD CONSTRAINT `colector` FOREIGN KEY (`colectorid`) REFERENCES `colector` (`ColectorID`),
  ADD CONSTRAINT `frutos` FOREIGN KEY (`frutos`) REFERENCES `frutos` (`FrutoID`),
  ADD CONSTRAINT `hojas` FOREIGN KEY (`hojas`) REFERENCES `hojas` (`HojaID`),
  ADD CONSTRAINT `pelaje` FOREIGN KEY (`pelaje`) REFERENCES `pelaje` (`PelajeID`);

--
-- Filtros para la tabla `persona`
--
ALTER TABLE `persona`
  ADD CONSTRAINT `persona_ibfk_1` FOREIGN KEY (`GeneroID`) REFERENCES `genero` (`GeneroID`),
  ADD CONSTRAINT `persona_ibfk_2` FOREIGN KEY (`Universidad`) REFERENCES `universidades` (`UniversidadID`),
  ADD CONSTRAINT `persona_ibfk_3` FOREIGN KEY (`UserType`) REFERENCES `tipousuario` (`UserTypeID`),
  ADD CONSTRAINT `persona_ibfk_4` FOREIGN KEY (`Colector`) REFERENCES `colector` (`ColectorID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
