#include "painel.hpp"
#include <iomanip>
#include <sstream>

std::string linhaPainel(const Sensor& sensor) {
    std::ostringstream linha;

    linha << sensor.tag() << ": "
          << std::fixed << std::setprecision(1) << sensor.valor()
          << ' ' << sensor.unidade() << " | "
          << (sensor.emAlerta() ? "ALERTA" : "OK");

    return linha.str();
}