import os
import requests
from PIL import Image
from io import BytesIO

def image_download(url, path_to_download):
    try:
        response = requests.get(url)
        response.raise_for_status()  # Raise an error for bad status codes
        image = Image.open(BytesIO(response.content))
        image.save(path_to_download)
        print(f"Image saved to {path_to_download}")
    except requests.exceptions.HTTPError as http_err:
        print(f"HTTP error occurred: {http_err}")
    except Exception as err:
        print(f"Other error occurred: {err}")

def download_images(start, end, base_url, base_path):
    os.makedirs(base_path, exist_ok=True)
    for i in range(start, end + 1):
        url = f"{base_url}?ImageName={i}"
        path_to_download = os.path.join(base_path, f"Image_{i}.jpg")
        image_download(url, path_to_download)

# Parameters
start_image_number = 6667
end_image_number = 15488
base_url = "http://erp.kpriet.ac.in:8181/erpoperations/ACA/Masters/aca_studentimage.ashx"
download_path = "/Users/jevaakharthik/Development/Students_iamge"

download_images(start_image_number, end_image_number, base_url, download_path)
