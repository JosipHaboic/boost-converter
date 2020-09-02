# Arduino Boost Converter

![atiny85-pin-configuration](./docs/images/atiny85-pin-config.png)

## Pin Configuration

---

* PB0 - Fast PWM output
* PB5 - ADC Output voltage monitoring
* PB2 - ADC Input voltage monitoring
* PB3 - Button (-) Output voltage decrease
* PB4 - Button (+) Output voltage increase
* PB1 - TX (Software serial output voltage tx)

## Math

---

### Continuous mode

---

When a boost converter operates in continuous mode, the current through the inductor (I<sub>L</sub>) never falls to zero.

\
Voltage output
> V<sub>output</sub> = V<sub>input</sub> / (1 - D)

Where D is the ON time duty cycle in range from 0 to 1

\
Current in the inductor while in ON state
> ΔI<sub>L<sub>ON</sub></sub> = DTV<sub>i</sub> / L

Where D is duty cycle in range from 0 to 1 and T is period ( 1/f ) \

Continuous mode graph \
![continuous-mode](./docs/images/boost-converter-continuous-mode.png)

---

### Discontinuous mode

---

As the inductor current at the beginning of the cycle is zero, its maximum value ( t=DT ) is:
> I<sub>L<sub>Max</sub></sub> = V<sub>i</sub>DT / L

Discontinuous mode graph
![discontinuous-mode](./docs/images/boost-converter-discontinuous-mode.png)

### Simulation snapshots (BJT  β=200)

---

At D = 0.25
![25-percent-DT](./docs/images/simulation/bc-bjt-load-100ohm-DT-25percent.png)

At D = 0.75
![75-percent-DT](./docs/images/simulation/bc-bjt-load-100ohm-DT-75percent.png)