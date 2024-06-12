import argparse
import os
from ultralytics import YOLO
from ultralytics import YOLO

parser = argparse.ArgumentParser()
parser.add_argument('--image_path', type=str, required=True, help='Путь к входному изображению')
args = parser.parse_args()

model = YOLO(' ../../src/best.pt')
results = model.predict(args.image_path, save=True)
