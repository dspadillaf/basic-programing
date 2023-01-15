-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 09-12-2022 a las 18:24:10
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
-- Base de datos: `padillavehiculo`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `vehiculo`
--

CREATE TABLE `vehiculo` (
  `Placa` varchar(7) NOT NULL,
  `Formulario` varchar(10) NOT NULL,
  `Propietario` int(11) NOT NULL,
  `Marca` varchar(20) NOT NULL,
  `Modelo` int(11) NOT NULL,
  `Valor` double NOT NULL,
  `Impuesto` double NOT NULL,
  `VehiculoTipo` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `vehiculo`
--

INSERT INTO `vehiculo` (`Placa`, `Formulario`, `Propietario`, `Marca`, `Modelo`, `Valor`, `Impuesto`, `VehiculoTipo`) VALUES
('AWT60E', 'FRM291', 1014279951, 'Discover', 2016, 5000000, 500000, 2);

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `vehiculo`
--
ALTER TABLE `vehiculo`
  ADD PRIMARY KEY (`Placa`),
  ADD KEY `tipo_vehiculo` (`VehiculoTipo`),
  ADD KEY `vehiculo_propietario` (`Propietario`);

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `vehiculo`
--
ALTER TABLE `vehiculo`
  ADD CONSTRAINT `tipo_vehiculo` FOREIGN KEY (`VehiculoTipo`) REFERENCES `tiposvehiculo` (`Vehiculotipoid`),
  ADD CONSTRAINT `vehiculo_propietario` FOREIGN KEY (`Propietario`) REFERENCES `propietario` (`Identificacion`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
